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
	{ 0x5ee8544a, "dm_register_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0xe692e914, "dm_per_bio_data" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x10d24857, "dm_put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0xfec20905, "dm_get_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x54907a0e, "dm_bio_from_per_bio_data" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9a163d6a, "dm_submit_bio_remap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "07F846D0448B84F80F18955");
