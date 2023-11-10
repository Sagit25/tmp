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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xb0dea802, "unregister_framebuffer" },
	{ 0x745bd700, "fb_deferred_io_cleanup" },
	{ 0x5c861d8c, "framebuffer_release" },
	{ 0x999e8297, "vfree" },
	{ 0x8d48b5a3, "rpisense_block_write" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4dfad400, "rpisense_get_dev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x6752d2b8, "framebuffer_alloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f3f63bf, "fb_deferred_io_init" },
	{ 0x3c2f60b0, "register_framebuffer" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc8437f7a, "sys_fillrect" },
	{ 0xfb262aa8, "sys_copyarea" },
	{ 0x102231c1, "sys_imageblit" },
	{ 0x71338e32, "fb_sys_write" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xb1c29ef, "fb_sys_read" },
	{ 0x215869ab, "fb_deferred_io_mmap" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rpisense-core,sysfillrect,syscopyarea,sysimgblt,fb_sys_fops");

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "6BD7E65C370EE916AD7F586");
