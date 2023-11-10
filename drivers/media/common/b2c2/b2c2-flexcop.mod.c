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

SYMBOL_CRC(b2c2_flexcop_debug, 0x66c0289a, "_gpl");
SYMBOL_CRC(flexcop_pass_dmx_data, 0x08c046d6, "");
SYMBOL_CRC(flexcop_pass_dmx_packets, 0x5ee7f16d, "");
SYMBOL_CRC(flexcop_device_kmalloc, 0xef924d49, "");
SYMBOL_CRC(flexcop_device_kfree, 0xafeaf703, "");
SYMBOL_CRC(flexcop_device_initialize, 0x3c82fd6c, "");
SYMBOL_CRC(flexcop_device_exit, 0x92740152, "");
SYMBOL_CRC(flexcop_i2c_request, 0x20fffdca, "");
SYMBOL_CRC(flexcop_sram_set_dest, 0x96af35db, "");
SYMBOL_CRC(flexcop_wan_set_speed, 0x2d7e6982, "");
SYMBOL_CRC(flexcop_sram_ctrl, 0x6dea3e1e, "");
SYMBOL_CRC(flexcop_eeprom_check_mac_addr, 0xaf4658d7, "");
SYMBOL_CRC(flexcop_dump_reg, 0xa335ff54, "");
SYMBOL_CRC(flexcop_pid_feed_control, 0x525d8453, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x74a05018, "request_firmware" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x46a842e7, "cx24123_get_tuner_i2c_adapter" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x72dad2a, "cx24113_agc_callback" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x34759133, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,cx24123,cx24113,s5h1420");


MODULE_INFO(srcversion, "CE55295613B96852C779147");
