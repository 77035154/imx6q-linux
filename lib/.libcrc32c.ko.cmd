cmd_lib/libcrc32c.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/libcrc32c.ko lib/libcrc32c.o lib/libcrc32c.mod.o
