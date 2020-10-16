cmd_arch/arm/boot/dts/imx50-evk.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx50-evk.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx50-evk.dtb.dts.tmp arch/arm/boot/dts/imx50-evk.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx50-evk.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx50-evk.dtb.d.dtc.tmp arch/arm/boot/dts/.imx50-evk.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx50-evk.dtb.d.pre.tmp arch/arm/boot/dts/.imx50-evk.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx50-evk.dtb.d

source_arch/arm/boot/dts/imx50-evk.dtb := arch/arm/boot/dts/imx50-evk.dts

deps_arch/arm/boot/dts/imx50-evk.dtb := \
  arch/arm/boot/dts/imx50.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx50-pinfunc.h \
  arch/arm/boot/dts/include/dt-bindings/clock/imx5-clock.h \

arch/arm/boot/dts/imx50-evk.dtb: $(deps_arch/arm/boot/dts/imx50-evk.dtb)

$(deps_arch/arm/boot/dts/imx50-evk.dtb):
