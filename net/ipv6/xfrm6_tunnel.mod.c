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

SYMBOL_CRC(xfrm6_tunnel_spi_lookup, 0x8384fc95, "");
SYMBOL_CRC(xfrm6_tunnel_alloc_spi, 0x53b3267c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x68b3fb06, "xfrm_register_type" },
	{ 0xa9788733, "xfrm6_tunnel_register" },
	{ 0x40416c0d, "xfrm6_tunnel_deregister" },
	{ 0x34568165, "xfrm_unregister_type" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd918e15a, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0xbfae7e2b, "xfrm_state_flush" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "8ABCB8006A2C434AB6E5891");
