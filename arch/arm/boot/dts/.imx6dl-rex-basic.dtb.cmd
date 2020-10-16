cmd_arch/arm/boot/dts/imx6dl-rex-basic.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-rex-basic.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-rex-basic.dtb.dts.tmp arch/arm/boot/dts/imx6dl-rex-basic.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-rex-basic.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-rex-basic.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-rex-basic.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-rex-basic.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-rex-basic.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-rex-basic.dtb.d

source_arch/arm/boot/dts/imx6dl-rex-basic.dtb := arch/arm/boot/dts/imx6dl-rex-basic.dts

deps_arch/arm/boot/dts/imx6dl-rex-basic.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-rex.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx6dl-rex-basic.dtb: $(deps_arch/arm/boot/dts/imx6dl-rex-basic.dtb)

$(deps_arch/arm/boot/dts/imx6dl-rex-basic.dtb):
