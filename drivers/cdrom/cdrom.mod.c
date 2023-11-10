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

SYMBOL_CRC(cdrom_dummy_generic_packet, 0xfce02bbb, "");
SYMBOL_CRC(register_cdrom, 0x1729e23c, "");
SYMBOL_CRC(unregister_cdrom, 0x669639f9, "");
SYMBOL_CRC(cdrom_get_media_event, 0x55535aeb, "");
SYMBOL_CRC(cdrom_open, 0x21339cc4, "");
SYMBOL_CRC(cdrom_release, 0xa08a21a3, "");
SYMBOL_CRC(cdrom_number_of_slots, 0x52010058, "");
SYMBOL_CRC(cdrom_check_events, 0x3ca0a762, "");
SYMBOL_CRC(init_cdrom_command, 0xbb24f607, "");
SYMBOL_CRC(cdrom_mode_sense, 0xe4ea8599, "");
SYMBOL_CRC(cdrom_mode_select, 0x31822e70, "");
SYMBOL_CRC(cdrom_multisession, 0x991ba268, "_gpl");
SYMBOL_CRC(cdrom_read_tocentry, 0x024729a8, "_gpl");
SYMBOL_CRC(cdrom_get_last_written, 0x09a91816, "");
SYMBOL_CRC(cdrom_ioctl, 0x553e6e3a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x92997ed8, "_printk" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x96848186, "scnprintf" },
	{ 0x319d493d, "proc_dostring" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9cd91791, "register_sysctl" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x161fbd94, "invalidate_bdev" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "906BF8586BA9A455D36847A");
