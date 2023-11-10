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
	{ 0x5261ca7a, "dlm_print_one_lock" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x39b699d5, "dlmlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x4f63d13b, "ocfs2_stack_glue_register" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0x13250cf0, "ocfs2_stack_glue_unregister" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3b3c8571, "dlm_unregister_domain" },
	{ 0x32e25944, "dlm_register_domain" },
	{ 0x461ede78, "dlm_register_eviction_cb" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4110588b, "dlmunlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue");


MODULE_INFO(srcversion, "80674EC32EDBE9DB4F32E7E");
