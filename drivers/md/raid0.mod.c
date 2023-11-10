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
	{ 0x1aea400d, "register_md_personality" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x92997ed8, "_printk" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x3cee14ba, "unregister_md_personality" },
	{ 0xb0411c9b, "md_account_bio" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xb66cae1b, "__traceiter_block_bio_remap" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x187a45f9, "md_error" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6682de, "bio_split" },
	{ 0xae8f1cfd, "bio_chain" },
	{ 0xd1635004, "md_flush_request" },
	{ 0x18f935c4, "md_submit_discard_bio" },
	{ 0x96848186, "scnprintf" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2beda9d, "md_check_no_bitmap" },
	{ 0xc51fc2f1, "acct_bioset_init" },
	{ 0x97ddd9b3, "blk_queue_max_hw_sectors" },
	{ 0xd50c34d3, "blk_queue_max_write_zeroes_sectors" },
	{ 0x93430f57, "blk_queue_io_min" },
	{ 0x83574cac, "blk_queue_io_opt" },
	{ 0x3a4b194d, "disk_stack_limits" },
	{ 0x9ea500ed, "md_set_array_sectors" },
	{ 0x91d35430, "md_integrity_register" },
	{ 0x517da35, "acct_bioset_exit" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "54E904EE374712C4C25B3B7");
