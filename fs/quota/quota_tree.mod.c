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

SYMBOL_CRC(qtree_entry_unused, 0x016e992b, "");
SYMBOL_CRC(qtree_write_dquot, 0x2819f71d, "");
SYMBOL_CRC(qtree_delete_dquot, 0xe8528af4, "");
SYMBOL_CRC(qtree_read_dquot, 0xe8943206, "");
SYMBOL_CRC(qtree_release_dquot, 0xe8286312, "");
SYMBOL_CRC(qtree_get_next_id, 0xc8b79a55, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2c601bb1, "__quota_error" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x37a0cba, "kfree" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x9f31d3a7, "dqstats" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x9a5145fd, "make_kprojid" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf8d435bf, "mark_info_dirty" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DBF1146A2B05F4D92247BEE");
