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
	{ 0x164d65e0, "em28xx_register_extension" },
	{ 0xa846e25e, "em28xx_set_mode" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xfe990052, "gpio_free" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x65176a62, "dvb_module_probe" },
	{ 0xc062f0a9, "dvb_module_release" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcf2a6966, "up" },
	{ 0x6626afca, "down" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xda149aa4, "em28xx_write_reg_bits" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb7cd7a, "em28xx_stop_urbs" },
	{ 0x4f975cb8, "em28xx_unregister_extension" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe9f38608, "dvb_frontend_resume" },
	{ 0x368de365, "dvb_frontend_suspend" },
	{ 0xf0e1ba98, "em28xx_setup_xc3028" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x36bb725c, "em28xx_alloc_urbs" },
	{ 0x37a0cba, "kfree" },
	{ 0xa129e238, "em28xx_uninit_usb_xfer" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x44090d75, "em28xx_gpio_set" },
	{ 0x9b0b821a, "em28xx_write_reg" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0xa784996, "dvb_create_media_graph" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x2ed5f15c, "em28xx_init_usb_xfer" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "E6A690D8011DB799AD6B08D");
