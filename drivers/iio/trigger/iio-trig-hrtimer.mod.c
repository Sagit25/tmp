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
	{ 0x667d3622, "iio_register_sw_trigger_type" },
	{ 0x815a2078, "iio_trigger_unregister" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xe3a84828, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x285753fc, "iio_unregister_sw_trigger_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5714d6f1, "__iio_trigger_alloc" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x68e05d9e, "iio_trigger_register" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x6e140a34, "iio_trigger_poll" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,industrialio");


MODULE_INFO(srcversion, "26DAE31E1F737B2E0E5683D");
