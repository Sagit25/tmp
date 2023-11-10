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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(videobuf_queue_vmalloc_init, 0x72977ede, "_gpl");
SYMBOL_CRC(videobuf_to_vmalloc, 0x63b160e5, "_gpl");
SYMBOL_CRC(videobuf_vmalloc_free, 0x26e0e31d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefde85cc, "videobuf_queue_core_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc32c42, "videobuf_queue_cancel" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7602a4e, "remap_vmalloc_range" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf-core");


MODULE_INFO(srcversion, "39E820F035201B8377B7A9A");
