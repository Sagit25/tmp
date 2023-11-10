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
	{ 0xc8dcc62a, "krealloc" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x30faa048, "usb_hid_driver" },
	{ 0x5a921311, "strncmp" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5a7bab55, "usb_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x441916ec, "input_event" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00005543p00000042");
MODULE_ALIAS("hid:b0003g*v00005543p00000003");
MODULE_ALIAS("hid:b0003g*v00005543p00000004");
MODULE_ALIAS("hid:b0003g*v00005543p00000005");
MODULE_ALIAS("hid:b0003g*v00005543p00000064");
MODULE_ALIAS("hid:b0003g*v00005543p00000522");
MODULE_ALIAS("hid:b0003g*v00005543p00000781");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006E");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006D");
MODULE_ALIAS("hid:b0003g*v0000145Fp00000212");
MODULE_ALIAS("hid:b0003g*v00005543p0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000004D");
MODULE_ALIAS("hid:b0003g*v00005543p00000081");
MODULE_ALIAS("hid:b0003g*v00005543p00000045");
MODULE_ALIAS("hid:b0003g*v00005543p00000047");
MODULE_ALIAS("hid:b0003g*v00005543p00003031");
MODULE_ALIAS("hid:b0003g*v00002179p00000053");
MODULE_ALIAS("hid:b0003g*v00002179p00000077");
MODULE_ALIAS("hid:b0003g*v000028BDp00001903");
MODULE_ALIAS("hid:b0003g*v000028BDp00000074");
MODULE_ALIAS("hid:b0003g*v000028BDp00000071");
MODULE_ALIAS("hid:b0003g*v000028BDp00000055");
MODULE_ALIAS("hid:b0003g*v000028BDp00000075");
MODULE_ALIAS("hid:b0003g*v000028BDp00000094");
MODULE_ALIAS("hid:b0003g*v000028BDp00000042");
MODULE_ALIAS("hid:b0003g*v000028BDp00000905");
MODULE_ALIAS("hid:b0003g*v000028BDp00000935");
MODULE_ALIAS("hid:b0003g*v000028BDp00000934");
MODULE_ALIAS("hid:b0003g*v000028BDp00000909");
MODULE_ALIAS("hid:b0003g*v000028BDp00000933");
MODULE_ALIAS("hid:b0003g*v000028BDp00000078");

MODULE_INFO(srcversion, "36F76A688D2FADD1C21EDC9");
