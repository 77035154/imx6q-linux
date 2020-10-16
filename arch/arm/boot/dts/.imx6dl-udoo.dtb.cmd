cmd_arch/arm/boot/dts/imx6dl-udoo.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-udoo.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-udoo.dtb.dts.tmp arch/arm/boot/dts/imx6dl-udoo.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-udoo.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-udoo.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-udoo.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-udoo.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-udoo.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-udoo.dtb.d

source_arch/arm/boot/dts/imx6dl-udoo.dtb := arch/arm/boot/dts/imx6dl-udoo.dts

deps_arch/arm/boot/dts/imx6dl-udoo.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-udoo.dtsi \

arch/arm/boot/dts/imx6dl-udoo.dtb: $(deps_arch/arm/boot/dts/imx6dl-udoo.dtb)

$(deps_arch/arm/boot/dts/imx6dl-udoo.dtb):
