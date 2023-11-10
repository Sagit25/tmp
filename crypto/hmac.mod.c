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
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x27896d67, "crypto_shash_finup" },
	{ 0xd62e1e12, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xac60644f, "crypto_grab_shash" },
	{ 0xe4832bac, "crypto_shash_alg_has_setkey" },
	{ 0x66600582, "shash_free_singlespawn_instance" },
	{ 0x18aa307f, "crypto_inst_setname" },
	{ 0x742f6709, "shash_register_instance" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd350f875, "crypto_shash_digest" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xdc2c0a60, "crypto_spawn_tfm2" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F6E0DA1FB66D4C24F4F87CA");
