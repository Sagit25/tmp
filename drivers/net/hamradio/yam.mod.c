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
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24d273d1, "add_timer" },
	{ 0x459e03b6, "init_net" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x43e492e8, "ax25_ip_xmit" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xcd02e645, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x4829a47e, "memcpy" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdcb764ad, "memset" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0x74a05018, "request_firmware" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x972a3723, "consume_skb" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x85bd1608, "__request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "EECD42A9D36A257F9E88560");
