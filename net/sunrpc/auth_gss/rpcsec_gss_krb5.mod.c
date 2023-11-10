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
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0x245a6d68, "crypto_alloc_ahash" },
	{ 0xe956a0ce, "xdr_buf_trim" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xb6ee0cf8, "xdr_process_buf" },
	{ 0x2957dfb9, "read_bytes_from_xdr_buf" },
	{ 0x22d66378, "crypto_ahash_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0x485fe513, "gss_mech_unregister" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0x1a71267c, "xdr_buf_subsegment" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0xc822898e, "crypto_alloc_sync_skcipher" },
	{ 0x252da672, "crypto_ahash_final" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x9d8f82ab, "gss_mech_register" },
	{ 0xf54bd49b, "lcm" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5408ba56, "write_bytes_to_xdr_buf" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC9AF88BFF2D7B81244D633");
