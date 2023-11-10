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
	{ 0x4caa31be, "nft_register_expr" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2ca67b51, "nft_obj_lookup" },
	{ 0xb36c34a0, "nf_tables_destroy_set" },
	{ 0xffc2b86e, "nf_tables_deactivate_set" },
	{ 0xb4dfc2e7, "nf_tables_activate_set" },
	{ 0xdd49bdc5, "nft_set_lookup_global" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xae0dd456, "nf_tables_bind_set" },
	{ 0x20a67779, "nft_set_catchall_lookup" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0x4a5a1bc, "nft_dump_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "2FCB8A862A7C70754CE477D");
