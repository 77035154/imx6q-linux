cmd_crypto/tcrypt.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o
