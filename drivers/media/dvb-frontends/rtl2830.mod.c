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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0x9fbffb21, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x8733236, "intlog10" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb216dec6, "__i2c_transfer" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf2ba3154, "__regmap_init" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "43DE4AD73007D1AD54F75BB");
