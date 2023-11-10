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
	{ 0x48471741, "skb_put" },
	{ 0xcc0e3c61, "usb_os_desc_prepare_interf_dir" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cf63ffe, "gether_disconnect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x30b59f75, "gether_set_dev_addr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xa8a54274, "gether_register_netdev" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x829925fd, "usb_function_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xae6b27b8, "gether_set_qmult" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x9a2e7fd1, "gether_get_host_addr" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x620f92d7, "gether_set_gadget" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0xa54af244, "gether_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xe315f00e, "gether_get_dev_addr" },
	{ 0x5f7e3ec1, "gether_set_host_addr" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x1495ce39, "gether_get_ifname" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x36ee7434, "gether_set_ifname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xb6076024, "gether_get_host_addr_cdc" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6fb9dffc, "gether_setup_name_default" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1aeed8c, "gether_get_qmult" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "59C444F09ADFE7471CFBEFC");
