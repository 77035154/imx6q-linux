cmd_arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.dts.tmp arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sxscm-1gb-evb-ldo.dtb.d

source_arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb := arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dts

deps_arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb := \
  arch/arm/boot/dts/imx6sxscm-evb-ldo.dts \
  arch/arm/boot/dts/imx6sxscm-evb.dts \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6sx.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6sx-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6sx-pinfunc.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb: $(deps_arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb)

$(deps_arch/arm/boot/dts/imx6sxscm-1gb-evb-ldo.dtb):
