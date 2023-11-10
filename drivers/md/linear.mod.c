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
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0x1aea400d, "register_md_personality" },
	{ 0x91d35430, "md_integrity_register" },
	{ 0xa2beda9d, "md_check_no_bitmap" },
	{ 0x31be761d, "mddev_resume" },
	{ 0x187a45f9, "md_error" },
	{ 0x37a0cba, "kfree" },
	{ 0xb66cae1b, "__traceiter_block_bio_remap" },
	{ 0x92997ed8, "_printk" },
	{ 0x9ea500ed, "md_set_array_sectors" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0xae8f1cfd, "bio_chain" },
	{ 0x3a4b194d, "disk_stack_limits" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xd1635004, "md_flush_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3cee14ba, "unregister_md_personality" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0x8591f9fa, "mddev_suspend" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf6682de, "bio_split" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "C27DDB505843BD5CAB41360");
