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
	{ 0x3e1cfad0, "platform_device_put" },
	{ 0x77232d69, "usbip_pack_pdu" },
	{ 0x5903cc1a, "usbip_start_eh" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xb099b57b, "usb_hcd_resume_root_hub" },
	{ 0x8b0f9f5a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x2dccc194, "__put_task_struct" },
	{ 0x3c1bf21a, "usbip_recv_xbuff" },
	{ 0x37a0cba, "kfree" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x12b8faac, "platform_device_add_data" },
	{ 0xeff99857, "platform_bus" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc0a07fe8, "usbip_recv" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x3718b89a, "usbip_dump_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcfff1e67, "usb_hcd_check_unlink_urb" },
	{ 0xf6677724, "usbip_pad_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x84821a26, "usbip_recv_iso" },
	{ 0xe2bce892, "fput" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x71ba49e7, "dev_attr_usbip_debug" },
	{ 0x1dd70ce4, "usbip_stop_eh" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5e169e6e, "platform_device_add" },
	{ 0x677df74e, "platform_device_alloc" },
	{ 0xed5669d7, "platform_device_del" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xeeb304ea, "usb_hcd_link_urb_to_ep" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x3eba0ed3, "usb_hcd_is_primary_hcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15aabbb1, "usbip_event_add" },
	{ 0xd5aed153, "usb_put_hcd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x908f2030, "usb_hcd_giveback_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2a0eb5ac, "usbip_alloc_iso_desc_pdu" },
	{ 0xbde4a42b, "usb_hcd_poll_rh_status" },
	{ 0x6b8c4477, "usb_create_hcd" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd7c173ab, "usb_remove_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0xde23410d, "usb_add_hcd" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xded4d53, "usb_create_shared_hcd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6e81ad2b, "usbip_event_happened" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "8D5569137A4FED6EC22B5AD");
