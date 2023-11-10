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
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0xd2a0c3c8, "efivars_kobject" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0xa336852c, "efivar_get_next_variable" },
	{ 0xe9668d19, "new_inode" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x414c3874, "inode_set_flags" },
	{ 0x12ec485a, "simple_statfs" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x1a70e5dc, "always_delete_dentry" },
	{ 0x809a8e2e, "current_time" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4864ce, "iput" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0x5a3c9dbb, "efivar_get_variable" },
	{ 0xb8413079, "register_filesystem" },
	{ 0x92997ed8, "_printk" },
	{ 0x2303b915, "efivar_lock" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6bd88b5, "ucs2_strnlen" },
	{ 0xce11b9f8, "d_alloc" },
	{ 0xb8ea7253, "simple_dir_operations" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x394f4efd, "simple_open" },
	{ 0xc961bff7, "efivar_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x7cd948ed, "kill_litter_super" },
	{ 0x72b23fe6, "d_delete" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1e9bcf6b, "d_add" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xac120953, "inc_nlink" },
	{ 0x7617fdac, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xeaf44a21, "generic_delete_inode" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbbfab4ee, "simple_lookup" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7cf79c43, "get_tree_single" },
	{ 0xdceb5362, "efi_status_to_err" },
	{ 0xefc77711, "efivar_set_variable_locked" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7410aba2, "strreplace" },
	{ 0x8fc1340, "drop_nlink" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd1363cc1, "ucs2_strsize" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5CB497FCF9E48FC02D249A0");
