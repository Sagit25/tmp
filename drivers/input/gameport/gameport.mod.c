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

SYMBOL_CRC(gameport_start_polling, 0x0c050bdf, "");
SYMBOL_CRC(gameport_stop_polling, 0x092bc281, "");
SYMBOL_CRC(gameport_set_phys, 0x542e2edc, "");
SYMBOL_CRC(__gameport_register_port, 0xcad7c90d, "");
SYMBOL_CRC(gameport_unregister_port, 0xf75f7be3, "");
SYMBOL_CRC(__gameport_register_driver, 0x028546d7, "");
SYMBOL_CRC(gameport_unregister_driver, 0x7ee8a450, "");
SYMBOL_CRC(gameport_open, 0x4a6b693c, "");
SYMBOL_CRC(gameport_close, 0x9ccc4d97, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x148653, "vsnprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc793c4a, "module_put" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1425e33, "try_module_get" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92997ed8, "_printk" },
	{ 0x9303f7be, "__module_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24a061ef, "driver_register" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeb280106, "bus_register" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x606b7e51, "put_device" },
	{ 0x402beac3, "device_del" },
	{ 0x518262a, "device_release_driver" },
	{ 0x3b483afa, "device_attach" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8eccc06a, "driver_attach" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x5a921311, "strncmp" },
	{ 0x29ceeaf3, "driver_find" },
	{ 0x8da344d3, "device_bind_driver" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EDB124E33EB322C224B9049");
