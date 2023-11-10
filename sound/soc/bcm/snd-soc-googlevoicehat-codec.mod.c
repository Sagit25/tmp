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
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x15e22dd0, "snd_soc_unregister_component" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x3a1174e8, "snd_soc_register_component" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cgoogle,voicehat");
MODULE_ALIAS("of:N*T*Cgoogle,voicehatC*");

MODULE_INFO(srcversion, "BB12B6EEC82BDC279BF90EF");
