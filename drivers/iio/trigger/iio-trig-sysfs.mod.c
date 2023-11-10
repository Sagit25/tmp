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
	{ 0x6eb983df, "device_initialize" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x7bbe500c, "device_add" },
	{ 0x606b7e51, "put_device" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x815a2078, "iio_trigger_unregister" },
	{ 0x6ee2bf4a, "irq_work_sync" },
	{ 0xe3a84828, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc793c4a, "module_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6e140a34, "iio_trigger_poll" },
	{ 0xeca6c2aa, "irq_work_queue" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5714d6f1, "__iio_trigger_alloc" },
	{ 0x68e05d9e, "iio_trigger_register" },
	{ 0x9303f7be, "__module_get" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xa14afd3e, "iio_bus_type" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "3675A10922834843386FD7A");
