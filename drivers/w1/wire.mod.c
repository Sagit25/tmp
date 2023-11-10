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

SYMBOL_CRC(w1_add_master_device, 0x63fcb7b2, "");
SYMBOL_CRC(w1_remove_master_device, 0x3b9bfb5c, "");
SYMBOL_CRC(w1_register_family, 0x01ca3e33, "");
SYMBOL_CRC(w1_unregister_family, 0x81138b63, "");
SYMBOL_CRC(w1_touch_bit, 0x11adcfd5, "_gpl");
SYMBOL_CRC(w1_write_8, 0x8fc10b6d, "_gpl");
SYMBOL_CRC(w1_triplet, 0x1bc9db54, "_gpl");
SYMBOL_CRC(w1_read_8, 0xb4a1a07c, "_gpl");
SYMBOL_CRC(w1_write_block, 0x032bd488, "_gpl");
SYMBOL_CRC(w1_touch_block, 0x33c56100, "_gpl");
SYMBOL_CRC(w1_read_block, 0x66ad212e, "_gpl");
SYMBOL_CRC(w1_reset_bus, 0x4a234d1c, "_gpl");
SYMBOL_CRC(w1_calc_crc8, 0x63757e92, "_gpl");
SYMBOL_CRC(w1_reset_select_slave, 0x9de11b05, "_gpl");
SYMBOL_CRC(w1_reset_resume_command, 0x481a98a9, "_gpl");
SYMBOL_CRC(w1_next_pullup, 0x04a8e004, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x709b4053, "sysfs_remove_groups" },
	{ 0xdaa0ac1e, "sysfs_create_groups" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x182e2f09, "cn_netlink_send_mult" },
	{ 0x606b7e51, "put_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x28bccfd7, "flush_signals" },
	{ 0xe8bc40c5, "cn_netlink_send" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7bad8f6b, "hwmon_device_register_with_info" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x4c74bd14, "device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0x6de54d7d, "hwmon_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7ce1c59f, "of_find_matching_node_and_match" },
	{ 0x24a061ef, "driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc2124e11, "cn_add_callback" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb280106, "bus_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "33057ED3C5BE7DF1D92B5BB");
