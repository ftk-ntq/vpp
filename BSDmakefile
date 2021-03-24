# Generic FreeBSD makefile to provide some shortcuts to get certain things up and running.

all: build

# Generate the .version file using git describe.
.version:
	git describe > .version

# Create the dir for the FreeBSD target.
build-freebsd:
	mkdir build-freebsd

# Generate the required CMake files
build-freebsd/CMakeCache.txt: .version build-freebsd
	cmake -B build-freebsd src

# Target to start the build using a single core.
.PHONY: build
build: build-freebsd/CMakeCache.txt
	cmake --build build-freebsd

# Target to start the build using multiple cores.
.PHONY: buildm
buildm: build-freebsd/CMakeCache.txt
	cmake --build build-freebsd -- -j 12

clean:
	rm -rf build-freebsd

# Enable a debug build for FreeBSD
debug:
	cmake -DCMAKE_BUILD_TYPE=Debug -B build-freebsd src

# Install the various dependancies
install-depends:
	pkg install python3
	pkg install bash
	pkg install git
	pkg install gmake
	pkg install cmake
	pkg install nasm
	pkg install py37-ply

# Run vpp with gdb
gdb:
	gdb --args build-freebsd/bin/vpp -c startup1.conf