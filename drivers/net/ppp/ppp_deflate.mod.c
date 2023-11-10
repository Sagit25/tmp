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
	{ 0xbdc9c501, "ppp_unregister_compressor" },
	{ 0x8b8f6008, "ppp_register_compressor" },
	{ 0x92997ed8, "_printk" },
	{ 0x424d3620, "zlib_inflateIncomp" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "378BD0882195011D186FA70");
