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
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xdcb764ad, "memset" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xf1564295, "input_register_device" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0xb3870713, "hid_hw_output_report" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C225");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C222");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C227");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22D");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22E");
MODULE_ALIAS("hid:b0003g*v0000046Dp00000A07");

MODULE_INFO(srcversion, "B18E2535E9751BB6DA9388B");
