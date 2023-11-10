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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "01AB6B462848D724777CFDB");
