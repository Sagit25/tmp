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

SYMBOL_CRC(serio_rescan, 0xa886cda9, "");
SYMBOL_CRC(serio_reconnect, 0x13f5c63c, "");
SYMBOL_CRC(__serio_register_port, 0xac1d85bb, "");
SYMBOL_CRC(serio_unregister_port, 0x5f410d94, "");
SYMBOL_CRC(serio_unregister_child_port, 0xe5b47992, "");
SYMBOL_CRC(__serio_register_driver, 0xbad2c909, "");
SYMBOL_CRC(serio_unregister_driver, 0xa41a8843, "");
SYMBOL_CRC(serio_open, 0x8472fd66, "");
SYMBOL_CRC(serio_close, 0x7d4d7f9b, "");
SYMBOL_CRC(serio_interrupt, 0x3571754c, "");
SYMBOL_CRC(serio_bus, 0x8e48c51f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc793c4a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x606b7e51, "put_device" },
	{ 0x402beac3, "device_del" },
	{ 0x518262a, "device_release_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1425e33, "try_module_get" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x9303f7be, "__module_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x24a061ef, "driver_register" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xeb280106, "bus_register" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x3b483afa, "device_attach" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x29ceeaf3, "driver_find" },
	{ 0x8da344d3, "device_bind_driver" },
	{ 0x8eccc06a, "driver_attach" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "29FA3592EB82E8388368FAA");
