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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(register_8022_client, 0x44a84e75, "");
SYMBOL_CRC(unregister_8022_client, 0x44f7e627, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6dae9b25, "llc_build_and_send_ui_pkt" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x32851e43, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbc765767, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "A71AFC2AA971C8922E8B7CB");
