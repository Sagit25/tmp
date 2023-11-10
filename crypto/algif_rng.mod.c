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
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x953fa338, "sock_kfree_s" },
	{ 0x82a47958, "af_alg_release_parent" },
	{ 0x71afe8f9, "crypto_rng_reset" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xe30fe825, "af_alg_unregister_type" },
	{ 0xdcb764ad, "memset" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4950080f, "crypto_alloc_rng" },
	{ 0x37a0cba, "kfree" },
	{ 0x13b0fcfa, "af_alg_release" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0xf0886af7, "sock_no_sendmsg" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "C2EE585A86B2D95CD64DC74");
