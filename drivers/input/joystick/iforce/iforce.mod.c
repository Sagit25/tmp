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

SYMBOL_CRC(iforce_init_device, 0x916846bc, "");
SYMBOL_CRC(iforce_send_packet, 0x138eb443, "");
SYMBOL_CRC(iforce_process_packet, 0x44a0bbf4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2345d009, "input_free_device" },
	{ 0x1000e51, "schedule" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x441916ec, "input_event" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x91dd57eb, "input_ff_create" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc5e74216, "release_resource" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4D5E3E97BA2472FBFEC433");
