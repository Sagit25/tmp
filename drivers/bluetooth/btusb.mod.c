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
	{ 0x63230d82, "usb_register_driver" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xdfc16901, "hci_cmd_sync_cancel" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf5de3713, "hci_unregister_dev" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0xfc1279d3, "hci_free_dev" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0x718b8b7, "bt_info" },
	{ 0x214e4265, "bt_warn" },
	{ 0x33ae4bae, "pm_runtime_allow" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0xe1bed8dd, "pm_runtime_forbid" },
	{ 0xf9a482f9, "msleep" },
	{ 0x856d75d, "usb_enable_autosuspend" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x538fb2e4, "__hci_cmd_sync_ev" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0xa8a6063f, "usb_queue_reset_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0xbec65b85, "hci_recv_frame" },
	{ 0x78376ec2, "btintel_secure_send_result" },
	{ 0x47572265, "btintel_bootup" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6973d8b2, "usb_get_from_anchor" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x48471741, "skb_put" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x789c9ca3, "hci_recv_diag" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x336b6aaa, "hci_alloc_dev_priv" },
	{ 0x9ff869eb, "gpiod_get_optional" },
	{ 0x209009ac, "of_match_device" },
	{ 0x2f041d07, "of_irq_get_byname" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf942077e, "btrtl_setup_realtek" },
	{ 0xfdde8d42, "btrtl_shutdown_realtek" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0x6c90c0b, "hci_register_dev" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xa33102b7, "usb_match_id" },
	{ 0xbe64cf6f, "btintel_configure_setup" },
	{ 0x6d0f7237, "btbcm_setup_patchram" },
	{ 0xa2a62774, "btbcm_set_bdaddr" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x538cafa9, "btbcm_setup_apple" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xac2d9473, "of_property_read_variable_u16_array" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x394f4efd, "simple_open" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btintel,btrtl,btbcm");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "93DB7F2181DA18B8C5D4511");
