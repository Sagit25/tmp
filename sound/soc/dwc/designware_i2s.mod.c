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
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x8982520b, "platform_get_irq_optional" },
	{ 0x8ec333b1, "snd_soc_set_runtime_hwparams" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8cc18dfc, "devm_snd_dmaengine_pcm_register" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Csnps,designware-i2s");
MODULE_ALIAS("of:N*T*Csnps,designware-i2sC*");

MODULE_INFO(srcversion, "20B4DF83A3364999C899CDA");
