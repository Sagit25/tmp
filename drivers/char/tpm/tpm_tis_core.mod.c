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

SYMBOL_CRC(tpm_tis_remove, 0x370c0fd8, "_gpl");
SYMBOL_CRC(tpm_tis_core_init, 0x4a647f29, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xedc03953, "iounmap" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf6d89f7a, "tpm1_getcap" },
	{ 0x7a9ab03e, "devm_free_irq" },
	{ 0x1dcdc489, "tpm_calc_ordinal_duration" },
	{ 0xe2964344, "__wake_up" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x40b5014c, "tpm2_get_tpm_pt" },
	{ 0x95ab71f7, "tpmm_chip_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x53c2e7f, "tpm_chip_start" },
	{ 0xbcd45cc, "tpm2_probe" },
	{ 0xa09149a9, "tpm_chip_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2193109b, "tpm_chip_bootstrap" },
	{ 0xed8fecd2, "tpm_get_timeouts" },
	{ 0x498325a6, "tpm_chip_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "421B1F917963621C5B465D3");
