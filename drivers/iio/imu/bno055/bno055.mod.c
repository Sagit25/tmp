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

SYMBOL_CRC(bno055_regmap_config, 0x5bc94927, "_gpl");
SYMBOL_CRC(bno055_probe, 0x06c2a281, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x25779a61, "regcache_drop_region" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x8247207e, "iio_trigger_notify_done" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0xf9a482f9, "msleep" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x579227c3, "devm_clk_get_optional_enabled" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xfcbcca79, "_dev_notice" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xab6c2dfb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0xa14bb7b8, "iio_get_debugfs_dentry" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x394f4efd, "simple_open" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "F1D7D9D9E18DC074E2FE5B9");
