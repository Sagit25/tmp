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
	{ 0x87bee547, "btracker_queue" },
	{ 0xd9d470af, "dm_cache_policy_unregister" },
	{ 0xa7eadcb5, "btracker_complete" },
	{ 0x96848186, "scnprintf" },
	{ 0x1c852cab, "btracker_nr_demotions_queued" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5adc2807, "btracker_destroy" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4d21836d, "dm_cache_policy_register" },
	{ 0x481a0b15, "btracker_create" },
	{ 0x999e8297, "vfree" },
	{ 0xa2365f44, "btracker_issue" },
	{ 0xefbca4c, "btracker_promotion_already_present" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-cache");


MODULE_INFO(srcversion, "A4DCEF1640A5FBAA9076AE6");
