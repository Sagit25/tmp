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
	{ 0xb1fe732d, "tap_create_cdev" },
	{ 0xdcced5f2, "__class_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xee26b7ce, "macvlan_link_register" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xc8e63c29, "tap_destroy_cdev" },
	{ 0x326f3f18, "netdev_rx_handler_unregister" },
	{ 0x6ff65db2, "tap_del_queues" },
	{ 0xabcb34b1, "macvlan_dellink" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0x67814264, "macvlan_common_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaa17c8c, "tap_get_minor" },
	{ 0x470ac3b4, "tap_queue_resize" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0x3f74d235, "device_destroy" },
	{ 0x77deba25, "tap_free_minor" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x7625e2ec, "tap_handle_frame" },
	{ 0xe3b40c9a, "netdev_rx_handler_register" },
	{ 0xf49079cc, "macvlan_common_newlink" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xacf20b97, "net_ns_type_operations" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tap,macvlan");


MODULE_INFO(srcversion, "40FA0EF61395E4584578688");
