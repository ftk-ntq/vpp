
all: build

.version:
	git describe > .version

build-freebsd:
	mkdir build-freebsd

build-freebsd/CMakeCache.txt: .version build-freebsd
	cmake -B build-freebsd src

.PHONY: build
build: build-freebsd/CMakeCache.txt
	cmake --build build-freebsd

clean:
	rm -rf build-freebsd

debug:
	cmake -DCMAKE_BUILD_TYPE=Debug -B build-freebsd src

install-depends:
	pkg install python3
	pkg install bash
	pkg install git
	pkg install gmake
	pkg install cmake
	pkg install nasm
	pkg install py37-ply