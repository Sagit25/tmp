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
	{ 0x701c503a, "register_quota_format" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x2c601bb1, "__quota_error" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x9f31d3a7, "dqstats" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x8d5ef628, "unregister_quota_format" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5B003A30B0FA4C7E052D085");
