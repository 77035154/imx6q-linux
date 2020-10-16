cmd_arch/arm/boot/dts/imx6q-hummingboard.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6q-hummingboard.dtb.dts.tmp arch/arm/boot/dts/imx6q-hummingboard.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6q-hummingboard.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6q-hummingboard.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.pre.tmp arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6q-hummingboard.dtb.d

source_arch/arm/boot/dts/imx6q-hummingboard.dtb := arch/arm/boot/dts/imx6q-hummingboard.dts

deps_arch/arm/boot/dts/imx6q-hummingboard.dtb := \
  arch/arm/boot/dts/imx6q.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6q-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-hummingboard.dtsi \
  arch/arm/boot/dts/imx6qdl-microsom.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/imx6qdl-microsom-ar8035.dtsi \

arch/arm/boot/dts/imx6q-hummingboard.dtb: $(deps_arch/arm/boot/dts/imx6q-hummingboard.dtb)

$(deps_arch/arm/boot/dts/imx6q-hummingboard.dtb):
