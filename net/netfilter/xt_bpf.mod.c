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
	{ 0x671f94f3, "xt_register_matches" },
	{ 0xab460d7f, "bpf_prog_destroy" },
	{ 0x49608959, "migrate_disable" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb7d9700, "xt_unregister_matches" },
	{ 0xa916b694, "strnlen" },
	{ 0x179b2cf8, "bpf_prog_get_type_path" },
	{ 0xe2b29bc7, "bpf_prog_create" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9fe006fd, "bpf_prog_get_type_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D3EE0220C3C869B56194D98");
