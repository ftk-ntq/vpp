#!/bin/sh

echo 16 > /sys/bus/pci/drivers/c6xx/0000:b5:00.0/sriov_numvfs
echo 16 > /sys/bus/pci/drivers/c6xx/0000:b6:00.0/sriov_numvfs

for device in $(seq 1 2); do \
  for fn in $(seq 0 7); do \
    ./build-root/install-vpp-native/external/bin/dpdk-devbind.py -u 0000:b5:0${device}.${fn}; \
    ./build-root/install-vpp-native/external/bin/dpdk-devbind.py -u 0000:b6:0${device}.${fn}; \
  done; \
done

modprobe vfio-pci

for device in $(seq 1 2); do \
  for fn in $(seq 0 7); do \
    ./build-root/install-vpp-native/external/bin/dpdk-devbind.py -b vfio-pci 0000:b5:0${device}.${fn}; \
    ./build-root/install-vpp-native/external/bin/dpdk-devbind.py -b vfio-pci 0000:b6:0${device}.${fn}; \
  done; \
done

./build-root/install-vpp-native/external/bin/dpdk-devbind.py --status
