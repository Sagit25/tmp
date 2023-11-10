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
	{ 0x92740152, "flexcop_device_exit" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d7e6982, "flexcop_wan_set_speed" },
	{ 0x5ee7f16d, "flexcop_pass_dmx_packets" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96af35db, "flexcop_sram_set_dest" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xef924d49, "flexcop_device_kmalloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x6dea3e1e, "flexcop_sram_ctrl" },
	{ 0xafeaf703, "flexcop_device_kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c82fd6c, "flexcop_device_initialize" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DD37E8CACD226AF87E65E5B");
