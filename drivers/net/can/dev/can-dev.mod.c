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

SYMBOL_CRC(can_put_echo_skb, 0x58dcf561, "_gpl");
SYMBOL_CRC(can_get_echo_skb, 0x09900edb, "_gpl");
SYMBOL_CRC(can_free_echo_skb, 0x5ca1b2e7, "_gpl");
SYMBOL_CRC(alloc_can_skb, 0xf5fd8840, "_gpl");
SYMBOL_CRC(alloc_canfd_skb, 0x280f4bd8, "_gpl");
SYMBOL_CRC(alloc_canxl_skb, 0xa00d81b8, "_gpl");
SYMBOL_CRC(alloc_can_err_skb, 0x927bd2fe, "_gpl");
SYMBOL_CRC(can_dropped_invalid_skb, 0x3b2b78f4, "_gpl");
SYMBOL_CRC(can_get_state_str, 0x10d892eb, "_gpl");
SYMBOL_CRC(can_change_state, 0x884d434d, "_gpl");
SYMBOL_CRC(can_bus_off, 0xe2efe534, "_gpl");
SYMBOL_CRC(alloc_candev_mqs, 0x25d49aec, "_gpl");
SYMBOL_CRC(free_candev, 0x5340bf35, "_gpl");
SYMBOL_CRC(can_change_mtu, 0x171a0c7e, "_gpl");
SYMBOL_CRC(can_eth_ioctl_hwts, 0x68fd1fd8, "");
SYMBOL_CRC(can_ethtool_op_get_ts_info_hwts, 0x46d9df31, "");
SYMBOL_CRC(open_candev, 0x31dcea25, "_gpl");
SYMBOL_CRC(of_can_transceiver, 0xd9c22c5c, "_gpl");
SYMBOL_CRC(close_candev, 0x19769b64, "_gpl");
SYMBOL_CRC(register_candev, 0xd069faf7, "_gpl");
SYMBOL_CRC(unregister_candev, 0x681b09e9, "_gpl");
SYMBOL_CRC(safe_candev_priv, 0x553b5a67, "_gpl");
SYMBOL_CRC(can_fd_dlc2len, 0xf12d9387, "_gpl");
SYMBOL_CRC(can_fd_len2dlc, 0x6047ede6, "_gpl");
SYMBOL_CRC(can_skb_get_frame_len, 0xeefd9ada, "_gpl");
SYMBOL_CRC(can_rx_offload_irq_offload_timestamp, 0x0c66abf6, "_gpl");
SYMBOL_CRC(can_rx_offload_irq_offload_fifo, 0x17f79065, "_gpl");
SYMBOL_CRC(can_rx_offload_queue_timestamp, 0x76ad2425, "_gpl");
SYMBOL_CRC(can_rx_offload_get_echo_skb, 0xe1c1442f, "_gpl");
SYMBOL_CRC(can_rx_offload_queue_tail, 0x6e8e90a9, "_gpl");
SYMBOL_CRC(can_rx_offload_irq_finish, 0x751f91a6, "_gpl");
SYMBOL_CRC(can_rx_offload_threaded_irq_finish, 0xc2266e79, "_gpl");
SYMBOL_CRC(can_rx_offload_add_timestamp, 0xf50cd60f, "_gpl");
SYMBOL_CRC(can_rx_offload_add_fifo, 0x8cb8d672, "_gpl");
SYMBOL_CRC(can_rx_offload_add_manual, 0xf0552201, "_gpl");
SYMBOL_CRC(can_rx_offload_enable, 0x9bb45d31, "_gpl");
SYMBOL_CRC(can_rx_offload_del, 0xf52c621a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb882b19b, "of_node_put" },
	{ 0x48471741, "skb_put" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x972a3723, "consume_skb" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x216dab, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x85a552e, "netdev_err" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x52238ddf, "napi_enable" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0xb310efd8, "nla_put" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x44289bce, "sock_efree" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CAF23804299378A606D5354");
