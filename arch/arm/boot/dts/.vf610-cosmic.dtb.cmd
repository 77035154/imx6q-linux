cmd_arch/arm/boot/dts/vf610-cosmic.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.vf610-cosmic.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.vf610-cosmic.dtb.dts.tmp arch/arm/boot/dts/vf610-cosmic.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vf610-cosmic.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.vf610-cosmic.dtb.d.dtc.tmp arch/arm/boot/dts/.vf610-cosmic.dtb.dts.tmp ; cat arch/arm/boot/dts/.vf610-cosmic.dtb.d.pre.tmp arch/arm/boot/dts/.vf610-cosmic.dtb.d.dtc.tmp > arch/arm/boot/dts/.vf610-cosmic.dtb.d

source_arch/arm/boot/dts/vf610-cosmic.dtb := arch/arm/boot/dts/vf610-cosmic.dts

deps_arch/arm/boot/dts/vf610-cosmic.dtb := \
  arch/arm/boot/dts/vf610.dtsi \
  arch/arm/boot/dts/vf500.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/vfxxx.dtsi \
  arch/arm/boot/dts/vf610-pinfunc.h \
  arch/arm/boot/dts/include/dt-bindings/clock/vf610-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \

arch/arm/boot/dts/vf610-cosmic.dtb: $(deps_arch/arm/boot/dts/vf610-cosmic.dtb)

$(deps_arch/arm/boot/dts/vf610-cosmic.dtb):
