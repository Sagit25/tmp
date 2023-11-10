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
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xa73a99e, "hid_hw_request" },
	{ 0x92997ed8, "_printk" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v00002006p00000118");

MODULE_INFO(srcversion, "8986EFA1D5C11138FE12BE6");
