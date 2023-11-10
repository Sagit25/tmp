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
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x76fcf5ea, "aead_geniv_alloc" },
	{ 0x8d5d7ef7, "aead_exit_geniv" },
	{ 0xce729da2, "aead_init_geniv" },
	{ 0x52623926, "aead_register_instance" },
	{ 0xd62e1e12, "crypto_unregister_template" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1076131CD0C90A1E35F85A7");
