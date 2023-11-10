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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x441916ec, "input_event" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x344b5c48, "devm_request_any_context_irq" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0xf1564295, "input_register_device" },
	{ 0x9e218444, "device_get_next_child_node" },
	{ 0x9804189d, "devm_fwnode_gpiod_get_index" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x30880ebb, "gpiod_is_active_low" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x653bf8e5, "gpiod_set_debounce" },
	{ 0x80ce52c7, "gpiod_cansleep" },
	{ 0x14c1c2a2, "device_get_child_node_count" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0x21917449, "of_fwnode_ops" },
	{ 0xff96f8c5, "fwnode_property_read_u32_array" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0x20af50d6, "irq_of_parse_and_map" },
	{ 0xc116761e, "fwnode_property_read_string" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6c12e46f, "input_device_enabled" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AA304F720A39428E1CFD9A5");
