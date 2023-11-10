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

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656a32cd, "tm6000_register_extension" },
	{ 0x13dbd0f0, "tm6000_unregister_extension" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9c6a64c, "tm6000_init_digital_mode" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tm6000,dvb-core");


MODULE_INFO(srcversion, "482CF049A47E9FF66656108");
