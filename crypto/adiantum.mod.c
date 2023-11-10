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
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xdc2c0a60, "crypto_spawn_tfm2" },
	{ 0xe44b15d0, "crypto_spawn_tfm" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x5f9239e9, "sg_miter_start" },
	{ 0x3c879db3, "sg_miter_next" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x728a1ce5, "sg_miter_stop" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xf60292b1, "crypto_cipher_decrypt_one" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0x756d9396, "crypto_cipher_encrypt_one" },
	{ 0xff8f6c0a, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xd62e1e12, "crypto_unregister_template" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x967d2f77, "crypto_req_done" },
	{ 0x236b7d18, "crypto_cipher_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xba35e0b9, "crypto_shash_setkey" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x56541ca9, "crypto_grab_skcipher" },
	{ 0xd380d607, "crypto_grab_spawn" },
	{ 0xac60644f, "crypto_grab_shash" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x95934857, "skcipher_register_instance" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E2DD3E9C82110E8C4F75C22");
