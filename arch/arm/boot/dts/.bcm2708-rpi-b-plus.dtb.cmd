cmd_arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.dts.tmp arch/arm/boot/dts/bcm2708-rpi-b-plus.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -@ -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.d.dtc.tmp arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.dts.tmp ; cat arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.d.pre.tmp arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.d.dtc.tmp > arch/arm/boot/dts/.bcm2708-rpi-b-plus.dtb.d

source_arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb := arch/arm/boot/dts/bcm2708-rpi-b-plus.dts

deps_arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb := \
  arch/arm/boot/dts/bcm2708.dtsi \
  arch/arm/boot/dts/bcm2835.dtsi \
  arch/arm/boot/dts/bcm283x.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/bcm2835.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/bcm2835.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/bcm2835-aux.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/soc/bcm2835-pm.h \
  arch/arm/boot/dts/bcm2835-common.dtsi \
  arch/arm/boot/dts/bcm2835-rpi-common.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/power/raspberrypi-power.h \
  arch/arm/boot/dts/bcm270x.dtsi \
  arch/arm/boot/dts/bcm2708-rpi.dtsi \
  arch/arm/boot/dts/bcm2835-rpi.dtsi \
  arch/arm/boot/dts/bcm270x-rpi.dtsi \
  arch/arm/boot/dts/bcm283x-rpi-smsc9514.dtsi \
  arch/arm/boot/dts/bcm283x-rpi-csi1-2lane.dtsi \
  arch/arm/boot/dts/bcm283x-rpi-i2c0mux_0_28.dtsi \

arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb: $(deps_arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb)

$(deps_arch/arm/boot/dts/bcm2708-rpi-b-plus.dtb):
