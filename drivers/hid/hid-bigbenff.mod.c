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
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc3acf18e, "hid_alloc_report_buf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d828c8b, "hid_output_report" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x7b65ec7d, "hid_validate_values" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000146Bp00000902");

MODULE_INFO(srcversion, "0A7CB3BA1B1F8FA700CC302");
