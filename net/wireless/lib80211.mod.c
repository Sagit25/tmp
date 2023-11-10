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

SYMBOL_CRC(lib80211_crypt_info_init, 0xad5c0b92, "");
SYMBOL_CRC(lib80211_crypt_info_free, 0x4691f9c6, "");
SYMBOL_CRC(lib80211_crypt_delayed_deinit, 0x0c9983a6, "");
SYMBOL_CRC(lib80211_register_crypto_ops, 0x2a808f8e, "");
SYMBOL_CRC(lib80211_unregister_crypto_ops, 0x2f1c5c04, "");
SYMBOL_CRC(lib80211_get_crypto_ops, 0x6e4253e7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcc793c4a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1852F8AD91D6BE1E1EF504B");
