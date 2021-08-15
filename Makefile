build:
	mkdir -p build
	cd build && \
	cmake ../ && \
	make

clean:
	rm -rf build

run:  build
	./build/source/main/shefu

help:
	@echo "make build         --> builds this project"
	@echo "make clean         --> cleans this project"
	@echo "make run           --> runs this project"

.PHONY: build

