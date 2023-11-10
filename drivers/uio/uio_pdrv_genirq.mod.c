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
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xc48a83dc, "devm_kstrdup" },
	{ 0x37162ff2, "__devm_uio_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8982520b, "platform_get_irq_optional" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "A159FBEF0B6BDA203BF8FEB");
