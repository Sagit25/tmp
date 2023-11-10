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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbc28ce7f, "i2c_smbus_read_byte" },
	{ 0x69be3936, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xb90aadc4, "irq_domain_remove" },
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x192c634e, "i2c_get_device_id" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x7574751, "irq_domain_simple_ops" },
	{ 0x6c620ca3, "__irq_domain_add" },
	{ 0xb4b7ee3e, "handle_simple_irq" },
	{ 0x8296d3ad, "irq_create_mapping_affinity" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xc5b6e657, "irq_set_chip_and_handler_name" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x31d84cdc, "__i2c_smbus_xfer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "23D5265BBFFBC1ED69DD630");
