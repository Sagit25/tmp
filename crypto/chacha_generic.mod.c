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
	{ 0x8377ecc, "crypto_register_skciphers" },
	{ 0x896a26a6, "skcipher_walk_virt" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x92a8b5d6, "skcipher_walk_done" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x64b68e93, "crypto_unregister_skciphers" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "CA9645E79BB90334E04CEE3");
