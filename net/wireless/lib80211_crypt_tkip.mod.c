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
	{ 0x2a808f8e, "lib80211_register_crypto_ops" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xba35e0b9, "crypto_shash_setkey" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2f1c5c04, "lib80211_unregister_crypto_ops" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x48471741, "skb_put" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0x37a0cba, "kfree" },
	{ 0x91e3fbf7, "wireless_send_event" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "lib80211,libarc4");


MODULE_INFO(srcversion, "342825861167009A7A02E3B");
