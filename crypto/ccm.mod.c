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
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xdc2c0a60, "crypto_spawn_tfm2" },
	{ 0xff8f6c0a, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0x22d66378, "crypto_ahash_setkey" },
	{ 0x236b7d18, "crypto_cipher_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0x756d9396, "crypto_cipher_encrypt_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xe44b15d0, "crypto_spawn_tfm" },
	{ 0x60442274, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd380d607, "crypto_grab_spawn" },
	{ 0x18aa307f, "crypto_inst_setname" },
	{ 0x66600582, "shash_free_singlespawn_instance" },
	{ 0x742f6709, "shash_register_instance" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf37154ad, "crypto_grab_aead" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x52623926, "aead_register_instance" },
	{ 0xa78f030c, "crypto_grab_ahash" },
	{ 0x5a921311, "strncmp" },
	{ 0x56541ca9, "crypto_grab_skcipher" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0x5733df8c, "crypto_ahash_finup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "869B2F88148A6CFCBE87A38");
