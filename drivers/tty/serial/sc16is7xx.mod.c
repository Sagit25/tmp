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
	{ 0x6e648b8d, "uart_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xf0667868, "uart_unregister_driver" },
	{ 0x3cc58914, "kthread_queue_work" },
	{ 0x1aa161a5, "kthread_queue_delayed_work" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xca8e10d6, "kthread_cancel_delayed_work_sync" },
	{ 0x3727bd9b, "uart_remove_one_port" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xe84dd25b, "kthread_flush_worker" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x309c455f, "gpiochip_remove" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc67f690b, "uart_handle_cts_change" },
	{ 0xa5a0d6fc, "uart_handle_dcd_change" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3a4d7a00, "regcache_cache_bypass" },
	{ 0x2d3abc95, "regmap_raw_write" },
	{ 0xa0a83be8, "uart_write_wakeup" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc047d9e, "regmap_raw_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x53b0b78f, "uart_insert_char" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0x519cd8fe, "uart_try_toggle_sysrq" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0x3990c46d, "do_SAK" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6d25b3c, "__kthread_init_worker" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xaf9d2913, "sched_set_fifo" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x88f77112, "uart_add_one_port" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xc711578e, "of_prop_next_u32" },
	{ 0xfeb2a3aa, "gpiochip_add_data_with_key" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xd0585d22, "spi_setup" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x336860d8, "uart_get_baud_rate" },
	{ 0x359a78a9, "uart_update_timeout" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "50088B494B6607286441281");
