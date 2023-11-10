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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x3f74d235, "device_destroy" },
	{ 0x3486581a, "class_destroy" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x37a0cba, "kfree" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x6824db2b, "phys_mem_access_prot" },
	{ 0x819df5d2, "remap_pfn_range" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x209009ac, "of_match_device" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x853d16c8, "__class_create" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc71dca20, "generic_access_phys" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intc");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intcC*");

MODULE_INFO(srcversion, "172E55C090236D5E5327EC4");
