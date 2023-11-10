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
	{ 0xbc28ce7f, "i2c_smbus_read_byte" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xb924b5cf, "gpiochip_disable_irq" },
	{ 0x39b4b0bb, "gpiochip_enable_irq" },
	{ 0x69be3936, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xcb71bd22, "handle_level_irq" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x16d67eaf, "gpiochip_irq_reqres" },
	{ 0x317a48c2, "gpiochip_irq_relres" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8574");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574aC*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574");
MODULE_ALIAS("of:N*T*Cnxp,pca8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670");
MODULE_ALIAS("of:N*T*Cnxp,pca9670C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672");
MODULE_ALIAS("of:N*T*Cnxp,pca9672C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674");
MODULE_ALIAS("of:N*T*Cnxp,pca9674C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575");
MODULE_ALIAS("of:N*T*Cnxp,pca8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671");
MODULE_ALIAS("of:N*T*Cnxp,pca9671C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673");
MODULE_ALIAS("of:N*T*Cnxp,pca9673C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675");
MODULE_ALIAS("of:N*T*Cnxp,pca9675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328");
MODULE_ALIAS("of:N*T*Cmaxim,max7328C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329");
MODULE_ALIAS("of:N*T*Cmaxim,max7329C*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "F5EA8DECD05F6A5C9719529");
