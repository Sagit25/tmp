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

SYMBOL_CRC(snd_seq_autoload_init, 0x370a0736, "");
SYMBOL_CRC(snd_seq_autoload_exit, 0x091def1c, "");
SYMBOL_CRC(snd_seq_device_load_drivers, 0x6339b6d0, "");
SYMBOL_CRC(snd_seq_device_new, 0x5844d287, "");
SYMBOL_CRC(__snd_seq_driver_register, 0xa34f0eef, "_gpl");
SYMBOL_CRC(snd_seq_driver_unregister, 0x4463685a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe9182752, "snd_info_register" },
	{ 0xa9f96f2, "snd_info_create_module_entry" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0xf7a79376, "snd_seq_root" },
	{ 0x37a0cba, "kfree" },
	{ 0x606b7e51, "put_device" },
	{ 0xc5c341a6, "bus_for_each_dev" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x7bbe500c, "device_add" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x402beac3, "device_del" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x24a061ef, "driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb280106, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "3F6B140A67AC583E7537AB2");
