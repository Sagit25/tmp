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
	{ 0x11089ac7, "_ctype" },
	{ 0x7cf79c43, "get_tree_single" },
	{ 0x40bc4b68, "simple_fill_super" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0x37a0cba, "kfree" },
	{ 0x24e1b130, "filp_close" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x8fc1340, "drop_nlink" },
	{ 0xc92ed988, "d_drop" },
	{ 0x7617fdac, "dput" },
	{ 0xef10062a, "simple_release_fs" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xc76f037b, "__register_binfmt" },
	{ 0x6e9f469c, "unregister_binfmt" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x349cba85, "strchr" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x553cf7fb, "open_exec" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe84159ba, "lookup_one_len" },
	{ 0xce807a25, "up_write" },
	{ 0xe9668d19, "new_inode" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x809a8e2e, "current_time" },
	{ 0xf9a7d75d, "simple_pin_fs" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x4a4864ce, "iput" },
	{ 0x92997ed8, "_printk" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x9f984513, "strrchr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x768a04dd, "copy_string_kernel" },
	{ 0x4a32109e, "bprm_change_interp" },
	{ 0x23b7cdca, "dentry_open" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x112a9ed6, "remove_arg_zero" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12ec485a, "simple_statfs" },
	{ 0x683b9cce, "default_llseek" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x7cd948ed, "kill_litter_super" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "789587068F031BCB6B7CC28");
