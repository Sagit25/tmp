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

SYMBOL_CRC(usbatm_usb_probe, 0xd1d673c8, "_gpl");
SYMBOL_CRC(usbatm_usb_disconnect, 0x82740225, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20baa620, "atm_dev_register" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb17dd40a, "atm_dev_deregister" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xa6257a2f, "complete" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x4df02057, "crc32_be" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x7835988b, "atm_charge" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5a7bab55, "usb_string" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xdcb764ad, "memset" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xebe193a7, "send_sig" },
	{ 0x24ba9e49, "vcc_release_async" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "D84882A5EA9C61524EF727F");
