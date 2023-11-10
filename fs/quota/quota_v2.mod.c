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
	{ 0x701c503a, "register_quota_format" },
	{ 0x668b19a1, "down_read" },
	{ 0xc8b79a55, "qtree_get_next_id" },
	{ 0x53b954a2, "up_read" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe8286312, "qtree_release_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0x2819f71d, "qtree_write_dquot" },
	{ 0xe8943206, "qtree_read_dquot" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2c601bb1, "__quota_error" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x16e992b, "qtree_entry_unused" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8d5ef628, "unregister_quota_format" },
	{ 0x9a5145fd, "make_kprojid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "346A40DE11699FE3101DD7C");
