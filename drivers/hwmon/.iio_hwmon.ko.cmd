cmd_drivers/hwmon/iio_hwmon.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hwmon/iio_hwmon.ko drivers/hwmon/iio_hwmon.o drivers/hwmon/iio_hwmon.mod.o;  true