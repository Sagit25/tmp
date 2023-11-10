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

SYMBOL_CRC(sps30_probe, 0x61478763, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8247207e, "iio_trigger_notify_done" },
	{ 0xfe70805b, "iio_get_time_ns" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xab6c2dfb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "3CF7AC1A71449D9BB5E6DB3");
