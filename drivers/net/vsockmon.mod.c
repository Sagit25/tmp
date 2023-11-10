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
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x21887833, "dev_lstats_read" },
	{ 0xdce4c192, "vsock_remove_tap" },
	{ 0x3cc2785f, "vsock_add_tap" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x972a3723, "consume_skb" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "30DE1ACC1ABC2BA397AE46D");
