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

SYMBOL_CRC(m88ds3103_get_agc_pwm, 0x33dd79ab, "");
SYMBOL_CRC(m88ds3103_attach, 0x95a95044, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xdd64e639, "strscpy" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0x37a0cba, "kfree" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8733236, "intlog10" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb216dec6, "__i2c_transfer" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3a90ab7e, "regmap_multi_reg_write" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:m88ds3103");
MODULE_ALIAS("i2c:m88rs6000");
MODULE_ALIAS("i2c:m88ds3103b");

MODULE_INFO(srcversion, "A645BBB78C6CBDFAB163493");
