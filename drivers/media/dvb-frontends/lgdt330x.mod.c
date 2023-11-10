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

SYMBOL_CRC(lgdt330x_attach, 0x10de20e9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xdd64e639, "strscpy" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8733236, "intlog10" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:lgdt330x");

MODULE_INFO(srcversion, "754826FED6425BDBAFA0B66");
