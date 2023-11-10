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
	{ 0x92997ed8, "_printk" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b8f6008, "ppp_register_compressor" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdc9c501, "ppp_unregister_compressor" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic,libarc4");


MODULE_INFO(srcversion, "0843E154B7E41F10B0035F8");
