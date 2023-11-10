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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x77232d69, "usbip_pack_pdu" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x5903cc1a, "usbip_start_eh" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2dccc194, "__put_task_struct" },
	{ 0x3c1bf21a, "usbip_recv_xbuff" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x7a41b9f2, "usb_ep_set_maxpacket_limit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2bdf8c69, "usb_add_gadget_udc" },
	{ 0xc0a07fe8, "usbip_recv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x84821a26, "usbip_recv_iso" },
	{ 0xe2bce892, "fput" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1dd70ce4, "usbip_stop_eh" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5e169e6e, "platform_device_add" },
	{ 0x677df74e, "platform_device_alloc" },
	{ 0xed5669d7, "platform_device_del" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5d412bdd, "usb_gadget_udc_reset" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15aabbb1, "usbip_event_add" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7be89624, "usb_gadget_giveback_request" },
	{ 0xca2f70e6, "usb_del_gadget_udc" },
	{ 0x2a0eb5ac, "usbip_alloc_iso_desc_pdu" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6e81ad2b, "usbip_event_happened" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "B3946504D42FCCAC5CA54C8");
