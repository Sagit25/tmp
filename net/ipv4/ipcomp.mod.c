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
	{ 0x68b3fb06, "xfrm_register_type" },
	{ 0x92997ed8, "_printk" },
	{ 0x8c5649fc, "xfrm4_protocol_register" },
	{ 0x34568165, "xfrm_unregister_type" },
	{ 0x901d64f, "xfrm4_protocol_deregister" },
	{ 0xd41c19d0, "ipcomp_init_state" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x67a1ae24, "xfrm_state_alloc" },
	{ 0x6622f61a, "xfrm_init_state" },
	{ 0x4e280d66, "xfrm_state_insert" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0x7ca8b3ec, "ipcomp_destroy" },
	{ 0x2c9869d8, "ipcomp_input" },
	{ 0x9358038, "ipcomp_output" },
	{ 0x509006fd, "xfrm4_rcv" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "06D5E3DCEC23794056480B1");
