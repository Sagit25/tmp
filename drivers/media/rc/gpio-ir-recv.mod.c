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
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x557554f7, "ir_raw_event_store_edge" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0xeab0651c, "devm_rc_allocate_device" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xbc1a474b, "devm_rc_register_device" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "6ED0F763F9528FB1E3C0A62");
