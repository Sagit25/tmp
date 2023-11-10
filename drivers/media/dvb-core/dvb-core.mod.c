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

SYMBOL_CRC(dvb_generic_open, 0xdd39f4cd, "");
SYMBOL_CRC(dvb_generic_release, 0x4f97c8b2, "");
SYMBOL_CRC(dvb_generic_ioctl, 0x02ae2cb4, "");
SYMBOL_CRC(dvb_register_device, 0x61490374, "");
SYMBOL_CRC(dvb_remove_device, 0x635f8031, "");
SYMBOL_CRC(dvb_device_get, 0xef8dd96b, "");
SYMBOL_CRC(dvb_unregister_device, 0x68cc2015, "");
SYMBOL_CRC(dvb_create_media_graph, 0x0a784996, "_gpl");
SYMBOL_CRC(dvb_register_adapter, 0xa86ceda7, "");
SYMBOL_CRC(dvb_unregister_adapter, 0x35834e97, "");
SYMBOL_CRC(dvb_module_probe, 0x65176a62, "_gpl");
SYMBOL_CRC(dvb_module_release, 0xc062f0a9, "_gpl");
SYMBOL_CRC(dvb_dmxdev_init, 0x8975dd80, "");
SYMBOL_CRC(dvb_dmxdev_release, 0x337413f4, "");
SYMBOL_CRC(dvb_dmx_swfilter_packets, 0x18acd31f, "");
SYMBOL_CRC(dvb_dmx_swfilter, 0x8c54b0f8, "");
SYMBOL_CRC(dvb_dmx_swfilter_204, 0x6a9f708a, "");
SYMBOL_CRC(dvb_dmx_swfilter_raw, 0xa4235824, "");
SYMBOL_CRC(dvb_dmx_init, 0x54abe4ff, "");
SYMBOL_CRC(dvb_dmx_release, 0x9263a063, "");
SYMBOL_CRC(dvb_ca_en50221_camchange_irq, 0x39c3d505, "");
SYMBOL_CRC(dvb_ca_en50221_camready_irq, 0xc8d3fb55, "");
SYMBOL_CRC(dvb_ca_en50221_frda_irq, 0x98c83219, "");
SYMBOL_CRC(dvb_ca_en50221_init, 0x46d1c38d, "");
SYMBOL_CRC(dvb_ca_en50221_release, 0x1c517acd, "");
SYMBOL_CRC(dvb_frontend_reinitialise, 0x4ad302af, "");
SYMBOL_CRC(dvb_frontend_sleep_until, 0x3b93d71a, "");
SYMBOL_CRC(dvb_frontend_suspend, 0x368de365, "");
SYMBOL_CRC(dvb_frontend_resume, 0xe9f38608, "");
SYMBOL_CRC(dvb_register_frontend, 0x39708f09, "");
SYMBOL_CRC(dvb_unregister_frontend, 0x52ead1ae, "");
SYMBOL_CRC(dvb_frontend_detach, 0x08c2d340, "");
SYMBOL_CRC(dvb_net_release, 0x962fb831, "");
SYMBOL_CRC(dvb_net_init, 0xb69bd6f5, "");
SYMBOL_CRC(dvb_ringbuffer_flush, 0xfb9a826f, "");
SYMBOL_CRC(dvb_ringbuffer_init, 0xebbc2d9b, "");
SYMBOL_CRC(dvb_ringbuffer_empty, 0xb3352dd2, "");
SYMBOL_CRC(dvb_ringbuffer_free, 0xfc6380e5, "");
SYMBOL_CRC(dvb_ringbuffer_avail, 0xe138ce6b, "");
SYMBOL_CRC(dvb_ringbuffer_flush_spinlock_wakeup, 0x6181aec0, "");
SYMBOL_CRC(dvb_ringbuffer_read_user, 0x91a6794b, "");
SYMBOL_CRC(dvb_ringbuffer_read, 0xfb09f39a, "");
SYMBOL_CRC(dvb_ringbuffer_write, 0x2f5cdf80, "");
SYMBOL_CRC(dvb_ringbuffer_write_user, 0xc3f679f9, "");
SYMBOL_CRC(intlog2, 0x5f2b1d95, "");
SYMBOL_CRC(intlog10, 0x08733236, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xfe0e58c4, "media_devnode_remove" },
	{ 0x1425e33, "try_module_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5ca1b79, "eth_header" },
	{ 0x853d16c8, "__class_create" },
	{ 0x48471741, "skb_put" },
	{ 0x972a3723, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3486581a, "class_destroy" },
	{ 0xcf2a6966, "up" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4df02057, "crc32_be" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x56962cfc, "ether_setup" },
	{ 0xf1f43905, "media_create_intf_link" },
	{ 0xa44117d4, "media_create_pad_links" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x643559f2, "eth_header_parse" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0x121445a5, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x6626afca, "down" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x683b9cce, "default_llseek" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xfe74f7f4, "media_get_pad_index" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3f74d235, "device_destroy" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2905ad4, "media_devnode_create" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "351B03023C473F36E8CE74F");
