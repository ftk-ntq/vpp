
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
