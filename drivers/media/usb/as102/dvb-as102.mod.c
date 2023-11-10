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
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0xdecc3667, "usb_find_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x46232528, "usb_register_dev" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x11089ac7, "_ctype" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0xdcb764ad, "memset" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0xa326414f, "usb_deregister_dev" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E1A54E9122FD60B5EBAB117");
