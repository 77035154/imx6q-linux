cmd_drivers/usb/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/usb/built-in.o drivers/usb/core/built-in.o drivers/usb/phy/built-in.o drivers/usb/host/built-in.o drivers/usb/storage/built-in.o drivers/usb/misc/built-in.o drivers/usb/chipidea/built-in.o drivers/usb/gadget/built-in.o drivers/usb/common/built-in.o 
