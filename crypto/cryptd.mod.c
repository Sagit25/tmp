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

SYMBOL_CRC(cryptd_alloc_skcipher, 0x807a509a, "_gpl");
SYMBOL_CRC(cryptd_skcipher_child, 0x9e466cb2, "_gpl");
SYMBOL_CRC(cryptd_skcipher_queued, 0xaedbad1c, "_gpl");
SYMBOL_CRC(cryptd_free_skcipher, 0x1fda648f, "_gpl");
SYMBOL_CRC(cryptd_alloc_ahash, 0x4a4f2f20, "_gpl");
SYMBOL_CRC(cryptd_ahash_child, 0x7e1926c1, "_gpl");
SYMBOL_CRC(cryptd_shash_desc, 0x60f18ab1, "_gpl");
SYMBOL_CRC(cryptd_ahash_queued, 0x09ff5eeb, "_gpl");
SYMBOL_CRC(cryptd_free_ahash, 0x817bcbf8, "_gpl");
SYMBOL_CRC(cryptd_alloc_aead, 0x4ce7ecd7, "_gpl");
SYMBOL_CRC(cryptd_aead_child, 0xe8809d4b, "_gpl");
SYMBOL_CRC(cryptd_aead_queued, 0x919002ff, "_gpl");
SYMBOL_CRC(cryptd_free_aead, 0x77ea68da, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0xf518f638, "crypto_alloc_skcipher" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x245a6d68, "crypto_alloc_ahash" },
	{ 0x4355f56e, "crypto_alloc_aead" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xdc2c0a60, "crypto_spawn_tfm2" },
	{ 0xff8f6c0a, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xba35e0b9, "crypto_shash_setkey" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xd18bb19f, "crypto_dequeue_request" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd62e1e12, "crypto_unregister_template" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x92997ed8, "_printk" },
	{ 0x18f2a24a, "crypto_register_template" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe0bb7e22, "crypto_enqueue_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x56541ca9, "crypto_grab_skcipher" },
	{ 0xf37154ad, "crypto_grab_aead" },
	{ 0xac60644f, "crypto_grab_shash" },
	{ 0xe4832bac, "crypto_shash_alg_has_setkey" },
	{ 0xff254cfa, "ahash_register_instance" },
	{ 0x95934857, "skcipher_register_instance" },
	{ 0x52623926, "aead_register_instance" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0xc034a84e, "shash_ahash_digest" },
	{ 0xed7e6e6b, "shash_ahash_finup" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0x420d4daa, "shash_ahash_update" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC77B79DA871D0D3F8BA23D");
