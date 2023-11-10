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
	{ 0xd553906c, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x441916ec, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x2345d009, "input_free_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x544f11c4, "i2c_smbus_write_word_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tca6416-keys");
MODULE_ALIAS("i2c:tca6408-keys");

MODULE_INFO(srcversion, "137C7AFB026E66717092FBD");
