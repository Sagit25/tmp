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

SYMBOL_CRC(st_register, 0xc6c70dea, "_gpl");
SYMBOL_CRC(st_unregister, 0x44c5b3fa, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x48471741, "skb_put" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x17a65868, "gpiod_set_raw_value_cansleep" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x74a05018, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xfe990052, "gpio_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x146ffae8, "tty_write_room" },
	{ 0x4b1fa124, "stop_tty" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xf5b71c4b, "sysfs_notify" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9b60945e, "tty_driver_flush_buffer" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x121445a5, "skb_pull" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x9166fada, "strncpy" },
	{ 0x13c2be27, "tty_ldisc_flush" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03588F092B82FAE394967A3");
