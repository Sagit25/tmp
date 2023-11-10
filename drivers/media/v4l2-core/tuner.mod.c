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
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "8D144303BF83AA3BA23946B");
