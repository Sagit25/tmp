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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa80bbe00, "cx231xx_register_extension" },
	{ 0x8938cf82, "cx231xx_set_mode" },
	{ 0x694b2a9a, "cx231xx_unregister_extension" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0xc062f0a9, "dvb_module_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa924278b, "cx231xx_get_i2c_adap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7c7aa4bd, "cx231xx_demod_reset" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0xa784996, "dvb_create_media_graph" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x65176a62, "dvb_module_probe" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x92997ed8, "_printk" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd4c4bbde, "cx231xx_uninit_bulk" },
	{ 0x827eca2e, "cx231xx_uninit_isoc" },
	{ 0x95225005, "cx231xx_set_alt_setting" },
	{ 0xbddfcf49, "cx231xx_init_bulk" },
	{ 0xa78f5582, "cx231xx_init_isoc" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "5D49D43B2223CCECF35A0D9");
