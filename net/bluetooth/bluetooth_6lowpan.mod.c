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
	{ 0x1425e33, "try_module_get" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xaebc0fd6, "l2cap_chan_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeed66407, "lowpan_register_netdev" },
	{ 0x9c0da235, "netdev_notify_peers" },
	{ 0x60867a0d, "l2cap_chan_connect" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x606b7e51, "put_device" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x8babef38, "bt_debugfs" },
	{ 0x2a3165c4, "lowpan_unregister_netdev" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0xcc793c4a, "module_put" },
	{ 0x87b59916, "lowpan_header_decompress" },
	{ 0x916c2e5f, "dev_open" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0x121445a5, "skb_pull" },
	{ 0xae132803, "debugfs_create_file_unsafe" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x524e3b9f, "nd_tbl" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x25613b6c, "l2cap_chan_put" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0fe9e38, "hci_get_route" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x718b8b7, "bt_info" },
	{ 0x685a941f, "l2cap_chan_close" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb46013d0, "l2cap_add_psm" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1baaf52f, "l2cap_chan_send" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9015f570, "lowpan_header_compress" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6d01c954, "l2cap_chan_del" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb3c6f341, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb2f79241, "l2cap_chan_set_defaults" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "6A5CDBA90048B3A11761AD9");
