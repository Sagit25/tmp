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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x77232d69, "usbip_pack_pdu" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x5903cc1a, "usbip_start_eh" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb450ffa4, "driver_remove_file" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x2dccc194, "__put_task_struct" },
	{ 0x5a24b219, "usb_hub_release_port" },
	{ 0x3c1bf21a, "usbip_recv_xbuff" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x772659c4, "usb_deregister_device_driver" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc0a07fe8, "usbip_recv" },
	{ 0xa916b694, "strnlen" },
	{ 0x38027f63, "driver_create_file" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x3718b89a, "usbip_dump_urb" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x84821a26, "usbip_recv_iso" },
	{ 0xe2bce892, "fput" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x71ba49e7, "dev_attr_usbip_debug" },
	{ 0x1dd70ce4, "usbip_stop_eh" },
	{ 0x3b483afa, "device_attach" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xb192816, "usb_register_device_driver" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x569a50e2, "usb_lock_device_for_reset" },
	{ 0x2866dbd5, "usbip_in_eh" },
	{ 0xdcb764ad, "memset" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15aabbb1, "usbip_event_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1fa2d1a9, "usb_hub_claim_port" },
	{ 0x87b8798d, "sg_next" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x2a0eb5ac, "usbip_alloc_iso_desc_pdu" },
	{ 0xc1dfb3bb, "usb_set_configuration" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x840342c6, "sgl_free" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6e81ad2b, "usbip_event_happened" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "21EFB72429FE46396005ADC");
