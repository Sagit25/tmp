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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x8e1c9263, "stmpe_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x54e4ee3d, "stmpe_set_bits" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4abe6fcd, "stmpe_block_read" },
	{ 0xf0f52d0a, "touchscreen_report_pos" },
	{ 0x441916ec, "input_event" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd6172630, "platform_get_irq_byname" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x193a896f, "stmpe_enable" },
	{ 0x3c818469, "stmpe811_adc_common_init" },
	{ 0x59a36156, "stmpe_reg_write" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x31065e62, "touchscreen_parse_properties" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x3fd1bba, "stmpe_reg_read" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "52A6D78295BEA306BB2E4AF");
