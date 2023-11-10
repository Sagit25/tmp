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
	{ 0x70de4cfa, "inet_diag_register" },
	{ 0x48aa03c8, "tcp_get_info" },
	{ 0x2b9cefad, "inet_diag_dump_one_icsk" },
	{ 0x2e252ef8, "inet_diag_dump_icsk" },
	{ 0x8f6b63c3, "inet_diag_unregister" },
	{ 0xb310efd8, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "A8686B3DA96958079866730");
