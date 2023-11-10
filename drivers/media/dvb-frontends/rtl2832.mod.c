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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0x9fbffb21, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xba894707, "__regmap_init_i2c" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8733236, "intlog10" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux,regmap-i2c,dvb-core");

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "F6AD5B283FED243352B7A9C");
