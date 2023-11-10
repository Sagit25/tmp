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
	{ 0xc7e15dc7, "crypto_register_templates" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xdc2c0a60, "crypto_spawn_tfm2" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xff8f6c0a, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xb648483b, "skcipher_alloc_instance_simple" },
	{ 0x95934857, "skcipher_register_instance" },
	{ 0x60442274, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x56541ca9, "crypto_grab_skcipher" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x896a26a6, "skcipher_walk_virt" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x92a8b5d6, "skcipher_walk_done" },
	{ 0x756d9396, "crypto_cipher_encrypt_one" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24B98D4E96BE16D932FA8FA");
