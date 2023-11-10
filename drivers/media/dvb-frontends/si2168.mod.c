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
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x74a05018, "request_firmware" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "8B94DBCA3DF220765D6A51E");
