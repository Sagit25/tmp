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
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x441916ec, "input_event" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb3870713, "hid_hw_output_report" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000045Ep0000003B");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000048");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DB");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DC");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000071D");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000F9");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000713");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000730");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000B4");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000750");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000732");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000009D");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000076C");
MODULE_ALIAS("hid:b0003g*v0000045Ep000007DA");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000E3");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000701");
MODULE_ALIAS("hid:b0005g*v0000045Ep0000091B");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002FD");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002E0");

MODULE_INFO(srcversion, "54B3DD8899272B00B7DAFC2");
