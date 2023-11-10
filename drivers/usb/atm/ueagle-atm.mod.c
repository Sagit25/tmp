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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x82740225, "usbatm_usb_disconnect" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x74a05018, "request_firmware" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x4df02057, "crc32_be" },
	{ 0xcd80461f, "kernel_param_lock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x89b800fd, "kernel_param_unlock" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x5a921311, "strncmp" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0xd1d673c8, "usbatm_usb_probe" },
	{ 0x1eacf08d, "atm_dev_signal_change" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x5a7bab55, "usb_string" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4AC8EF68852AB20945A7E56");
