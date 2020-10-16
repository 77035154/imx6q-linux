cmd_arch/arm/boot/dts/imx53-qsb.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx53-qsb.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx53-qsb.dtb.dts.tmp arch/arm/boot/dts/imx53-qsb.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx53-qsb.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx53-qsb.dtb.d.dtc.tmp arch/arm/boot/dts/.imx53-qsb.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx53-qsb.dtb.d.pre.tmp arch/arm/boot/dts/.imx53-qsb.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx53-qsb.dtb.d

source_arch/arm/boot/dts/imx53-qsb.dtb := arch/arm/boot/dts/imx53-qsb.dts

deps_arch/arm/boot/dts/imx53-qsb.dtb := \
  arch/arm/boot/dts/imx53-qsb-common.dtsi \
  arch/arm/boot/dts/imx53.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx53-pinfunc.h \
  arch/arm/boot/dts/include/dt-bindings/clock/imx5-clock.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx53-qsb.dtb: $(deps_arch/arm/boot/dts/imx53-qsb.dtb)

$(deps_arch/arm/boot/dts/imx53-qsb.dtb):
