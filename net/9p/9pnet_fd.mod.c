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
	{ 0xce3de5, "__sock_create" },
	{ 0xc0c4c4f, "p9_req_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ca255f5, "fget" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x65f35759, "sock_alloc_file" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe2bce892, "fput" },
	{ 0x4e3567f7, "match_int" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe6f1549b, "kernel_read" },
	{ 0x40b532a9, "p9_tag_lookup" },
	{ 0xb79f25fd, "p9_parse_header" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcee71989, "v9fs_register_trans" },
	{ 0x44e9a829, "match_token" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5d1af383, "v9fs_unregister_trans" },
	{ 0x3a1f223b, "p9_client_cb" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xc43a004e, "kernel_write" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "26CEB25BEDEC99A56B8530E");
