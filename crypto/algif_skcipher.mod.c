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
	{ 0x3a702d66, "af_alg_sendmsg" },
	{ 0xabef6998, "af_alg_pull_tsgl" },
	{ 0xaee3ac91, "sock_kzfree_s" },
	{ 0x953fa338, "sock_kfree_s" },
	{ 0x82a47958, "af_alg_release_parent" },
	{ 0x1e44e99c, "sock_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xf518f638, "crypto_alloc_skcipher" },
	{ 0xe30fe825, "af_alg_unregister_type" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x2691f097, "af_alg_async_cb" },
	{ 0x967d2f77, "crypto_req_done" },
	{ 0xd453d317, "af_alg_wait_for_data" },
	{ 0xda0324d5, "af_alg_alloc_areq" },
	{ 0x7088d879, "af_alg_get_rsgl" },
	{ 0x6ab15998, "af_alg_count_tsgl" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0x432aa90e, "af_alg_free_resources" },
	{ 0xd978eac6, "af_alg_wmem_wakeup" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8f8be68e, "af_alg_sendpage" },
	{ 0x13b0fcfa, "af_alg_release" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xd2f70127, "af_alg_poll" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "190A33BF4F1D68180B21D49");
