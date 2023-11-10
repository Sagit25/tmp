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
	{ 0x92997ed8, "_printk" },
	{ 0x5ee8544a, "dm_register_target" },
	{ 0xf327ece0, "blk_limits_io_min" },
	{ 0xb4a79898, "blk_limits_io_opt" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa38172ec, "md_unregister_thread" },
	{ 0xb58687a9, "md_reap_sync_thread" },
	{ 0xf1f26292, "md_wakeup_thread" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x1b9349ff, "sync_page_io" },
	{ 0x187a45f9, "md_error" },
	{ 0x609d7697, "md_update_sb" },
	{ 0xb2ac8345, "md_stop_writes" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8591f9fa, "mddev_suspend" },
	{ 0x12e7c5e6, "mddev_unlock" },
	{ 0x84785312, "md_handle_request" },
	{ 0x8d6d024d, "md_rdev_clear" },
	{ 0x10d24857, "dm_put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x711c5d66, "md_stop" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x31be761d, "mddev_resume" },
	{ 0x8b01c983, "dm_table_get_md" },
	{ 0xbecb0ea3, "dm_disk" },
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0x55c5df12, "dm_table_event" },
	{ 0x685dd48d, "md_bitmap_load" },
	{ 0x8121254e, "md_bitmap_resize" },
	{ 0x96848186, "scnprintf" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x56bcf7b, "dm_read_arg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf7bdf1f7, "mddev_init" },
	{ 0x757dcc2a, "md_rdev_init" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa745159a, "dm_set_target_max_io_len" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0xfec20905, "dm_get_device" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x949d51ba, "md_run" },
	{ 0x3c28b34b, "md_start" },
	{ 0x7e1fc70c, "r5c_journal_mode_set" },
	{ 0x87858b6, "raid5_set_cache_size" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,md-mod,raid456");


MODULE_INFO(srcversion, "A15F07891F90750E95D1DA6");
