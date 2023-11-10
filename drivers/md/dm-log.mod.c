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

SYMBOL_CRC(dm_dirty_log_type_register, 0xa8b5f0c9, "");
SYMBOL_CRC(dm_dirty_log_type_unregister, 0x4c461589, "");
SYMBOL_CRC(dm_dirty_log_create, 0xfebf6714, "");
SYMBOL_CRC(dm_dirty_log_destroy, 0xead959f2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x96848186, "scnprintf" },
	{ 0x10d24857, "dm_put_device" },
	{ 0x999e8297, "vfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x92997ed8, "_printk" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0xfec20905, "dm_get_device" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8745a12e, "dm_io" },
	{ 0x55c5df12, "dm_table_event" },
	{ 0xcc793c4a, "module_put" },
	{ 0x1425e33, "try_module_get" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9f984513, "strrchr" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "F8A3CEB476D4F63C056EFF4");
