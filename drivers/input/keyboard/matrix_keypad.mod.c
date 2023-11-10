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
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x133f4654, "matrix_keypad_build_keymap" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2345d009, "input_free_device" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xa16de2d2, "gpiod_count" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0x17a65868, "gpiod_set_raw_value_cansleep" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc24a9cda, "gpiod_get_raw_value_cansleep" },
	{ 0x441916ec, "input_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "C4044129BB47030EEEBF983");
