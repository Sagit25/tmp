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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x441916ec, "input_event" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x87c99dc1, "input_mt_report_pointer_emulation" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0xa73a99e, "hid_hw_request" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x3ea625a4, "hid_register_report" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd2c6dafb, "param_get_uint" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000269");
MODULE_ALIAS("hid:b0003g*v000005ACp00000269");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000265");
MODULE_ALIAS("hid:b0003g*v000005ACp00000265");

MODULE_INFO(srcversion, "F7DBAFD6B10F210B24827EB");
