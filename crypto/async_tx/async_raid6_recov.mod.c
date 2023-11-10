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

SYMBOL_CRC(async_raid6_2data_recov, 0xab51fab3, "_gpl");
SYMBOL_CRC(async_raid6_datap_recov, 0x1ca3751f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x22aafb10, "async_tx_quiesce" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x1803a6ed, "raid6_2data_recov" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "async_tx,raid6_pq");


MODULE_INFO(srcversion, "062F9612BD09B480935227F");
