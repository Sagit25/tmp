#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb26e53b2, "regmap_write" },
	{ 0x5789b767, "inv_mpu_core_probe" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x5f49eeb5, "device_get_named_child_node" },
	{ 0x3fd24889, "inv_mpu_pmops" },
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "inv-mpu6050,regmap-i2c,i2c-mux");

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu6515");
MODULE_ALIAS("i2c:mpu6880");
MODULE_ALIAS("i2c:mpu9150");
MODULE_ALIAS("i2c:mpu9250");
MODULE_ALIAS("i2c:mpu9255");
MODULE_ALIAS("i2c:icm20608");
MODULE_ALIAS("i2c:icm20608d");
MODULE_ALIAS("i2c:icm20609");
MODULE_ALIAS("i2c:icm20689");
MODULE_ALIAS("i2c:icm20602");
MODULE_ALIAS("i2c:icm20690");
MODULE_ALIAS("i2c:iam20680");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6880");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6880C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608d");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608dC*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20609");
MODULE_ALIAS("of:N*T*Cinvensense,icm20609C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20689");
MODULE_ALIAS("of:N*T*Cinvensense,icm20689C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20690");
MODULE_ALIAS("of:N*T*Cinvensense,icm20690C*");
MODULE_ALIAS("of:N*T*Cinvensense,iam20680");
MODULE_ALIAS("of:N*T*Cinvensense,iam20680C*");

MODULE_INFO(srcversion, "884F2268D1E305F6D76871E");
