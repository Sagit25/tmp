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

SYMBOL_CRC(ocfs2_stack_glue_register, 0x4f63d13b, "_gpl");
SYMBOL_CRC(ocfs2_stack_glue_unregister, 0x13250cf0, "_gpl");
SYMBOL_CRC(ocfs2_stack_glue_set_max_proto_version, 0xd344e4ee, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lock, 0xaf969565, "_gpl");
SYMBOL_CRC(ocfs2_dlm_unlock, 0xc5196999, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lock_status, 0xcafdd707, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lvb_valid, 0x1475f64b, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lvb, 0x76f40744, "_gpl");
SYMBOL_CRC(ocfs2_dlm_dump_lksb, 0xd806a273, "_gpl");
SYMBOL_CRC(ocfs2_stack_supports_plocks, 0xbbc4ef97, "_gpl");
SYMBOL_CRC(ocfs2_plock, 0xd2d3fc24, "_gpl");
SYMBOL_CRC(ocfs2_cluster_connect, 0xc9fae756, "_gpl");
SYMBOL_CRC(ocfs2_cluster_connect_agnostic, 0x0cfd3fc5, "_gpl");
SYMBOL_CRC(ocfs2_cluster_disconnect, 0x9507547f, "_gpl");
SYMBOL_CRC(ocfs2_cluster_hangup, 0x4d3af7fa, "_gpl");
SYMBOL_CRC(ocfs2_cluster_this_node, 0x0a726931, "_gpl");
SYMBOL_CRC(ocfs2_kset, 0xd6b51ae6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1425e33, "try_module_get" },
	{ 0x9cd91791, "register_sysctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9674484b, "kset_unregister" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x67a4e98b, "fs_kobj" },
	{ 0xa916b694, "strnlen" },
	{ 0xcc793c4a, "module_put" },
	{ 0x319d493d, "proc_dostring" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x5a921311, "strncmp" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd64e639, "strscpy" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa0a1468f, "kset_create_and_add" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6B23F9483CA48F201E73F49");
