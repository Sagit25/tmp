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
	{ 0x73a5f3d4, "__ovs_vport_ops_register" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xcc7aa77f, "ovs_vport_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd518cbc7, "gretap_fb_dev_create" },
	{ 0xef32f955, "dev_change_flags" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa1a3545f, "ovs_netdev_link" },
	{ 0xac15a50a, "rtnl_delete_link" },
	{ 0xcbe0da4c, "ovs_vport_free" },
	{ 0x4c4a0958, "ovs_vport_ops_unregister" },
	{ 0xd3609b9d, "ovs_netdev_tunnel_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "B62E520D2C4516FC37B1E5C");
