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

SYMBOL_CRC(curve25519_arch, 0xc832c670, "");
SYMBOL_CRC(curve25519_base_arch, 0x3c74a43e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa17d8035, "crypto_unregister_kpp" },
	{ 0x4a5a8811, "curve25519_null_point" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe508e1d9, "sg_nents_for_len" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x7e6fdbfc, "curve25519_base_point" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xab12581b, "crypto_register_kpp" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xe84dba2e, "sg_copy_from_buffer" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x88b66891, "sg_copy_to_buffer" },
	{ 0x12627f15, "curve25519_generic" },
	{ 0xa7bdfd77, "static_key_enable" },
	{ 0xb899592f, "module_layout" },
};

MODULE_INFO(depends, "libcurve25519-generic");


MODULE_INFO(srcversion, "2D7D80A6E2B22FDBB0FCFE3");
