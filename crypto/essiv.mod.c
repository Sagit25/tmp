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
	{ 0x18f2a24a, "crypto_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xdc2c0a60, "crypto_spawn_tfm2" },
	{ 0xc4b769ca, "crypto_alloc_base" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0x756d9396, "crypto_cipher_encrypt_one" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0xff8f6c0a, "crypto_drop_spawn" },
	{ 0xd62e1e12, "crypto_unregister_template" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x27896d67, "crypto_shash_finup" },
	{ 0x236b7d18, "crypto_cipher_setkey" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xe95f5238, "crypto_shash_tfm_digest" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x56541ca9, "crypto_grab_skcipher" },
	{ 0xf37154ad, "crypto_grab_aead" },
	{ 0x5a921311, "strncmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x349cba85, "strchr" },
	{ 0x92997ed8, "_printk" },
	{ 0x4829a47e, "memcpy" },
	{ 0x56443bae, "crypto_alg_mod_lookup" },
	{ 0x62495c86, "crypto_mod_put" },
	{ 0xe4832bac, "crypto_shash_alg_has_setkey" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x52623926, "aead_register_instance" },
	{ 0x95934857, "skcipher_register_instance" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "57274AD627CA48CCB20AA2F");
