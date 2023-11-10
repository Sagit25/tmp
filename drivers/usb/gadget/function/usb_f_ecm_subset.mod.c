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
	{ 0x14050dae, "usb_interface_id" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cf63ffe, "gether_disconnect" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x30b59f75, "gether_set_dev_addr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa8a54274, "gether_register_netdev" },
	{ 0x829925fd, "usb_function_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xae6b27b8, "gether_set_qmult" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x9a2e7fd1, "gether_get_host_addr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x620f92d7, "gether_set_gadget" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0xa54af244, "gether_connect" },
	{ 0xe315f00e, "gether_get_dev_addr" },
	{ 0x5f7e3ec1, "gether_set_host_addr" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1495ce39, "gether_get_ifname" },
	{ 0x36ee7434, "gether_set_ifname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb6076024, "gether_get_host_addr_cdc" },
	{ 0x6fb9dffc, "gether_setup_name_default" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1aeed8c, "gether_get_qmult" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "41B19EEFCD1834143AA71B9");
