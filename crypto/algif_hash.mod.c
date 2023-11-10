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
	{ 0xb40e5594, "af_alg_register_type" },
	{ 0x1e44e99c, "sock_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x967d2f77, "crypto_req_done" },
	{ 0x22d66378, "crypto_ahash_setkey" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x245a6d68, "crypto_alloc_ahash" },
	{ 0xe30fe825, "af_alg_unregister_type" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x16a3047f, "af_alg_accept" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaee3ac91, "sock_kzfree_s" },
	{ 0x953fa338, "sock_kfree_s" },
	{ 0x82a47958, "af_alg_release_parent" },
	{ 0x9e0da0d5, "af_alg_free_sg" },
	{ 0x15f9297c, "af_alg_make_sg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x252da672, "crypto_ahash_final" },
	{ 0xdcb764ad, "memset" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5733df8c, "crypto_ahash_finup" },
	{ 0xb94e81a1, "crypto_ahash_digest" },
	{ 0x13b0fcfa, "af_alg_release" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "A289A869D8FFF654CB472FB");
