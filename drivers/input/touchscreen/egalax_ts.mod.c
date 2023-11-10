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
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x441916ec, "input_event" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x87c99dc1, "input_mt_report_pointer_emulation" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0xfe990052, "gpio_free" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "C757A10FF0D460470DAE851");
