cmd_drivers/regulator/built-in.a := rm -f drivers/regulator/built-in.a;  printf "drivers/regulator/%s " core.o dummy.o fixed-helper.o helpers.o devres.o irq_helpers.o of_regulator.o fixed.o gpio-regulator.o | xargs aarch64-linux-gnu-ar cDPrST drivers/regulator/built-in.a