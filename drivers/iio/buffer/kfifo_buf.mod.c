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

SYMBOL_CRC(iio_kfifo_allocate, 0x1b8f50fc, "");
SYMBOL_CRC(iio_kfifo_free, 0xf6998924, "");
SYMBOL_CRC(devm_iio_kfifo_buffer_setup_ext, 0xc22fcea6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x30a80826, "__kfifo_from_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe2964344, "__wake_up" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xbae1f931, "iio_buffer_put" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb01f9066, "iio_buffer_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x28eced4f, "devres_add" },
	{ 0x53254e36, "iio_device_attach_buffer" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "789B2AF23BCA847A023B506");
