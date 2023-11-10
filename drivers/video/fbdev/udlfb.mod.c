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
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcf2a6966, "up" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6626afca, "down" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xfca3ace1, "device_remove_bin_file" },
	{ 0xb0dea802, "unregister_framebuffer" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x819df5d2, "remap_pfn_range" },
	{ 0x215869ab, "fb_deferred_io_mmap" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x999e8297, "vfree" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5c861d8c, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x745bd700, "fb_deferred_io_cleanup" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x71338e32, "fb_sys_write" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x102231c1, "sys_imageblit" },
	{ 0xfb262aa8, "sys_copyarea" },
	{ 0xc8437f7a, "sys_fillrect" },
	{ 0x8f3f63bf, "fb_deferred_io_init" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x5ed9f193, "usb_check_bulk_endpoints" },
	{ 0xb6f28144, "usb_get_descriptor" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0x6752d2b8, "framebuffer_alloc" },
	{ 0xb1c29ef, "fb_sys_read" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c2f60b0, "register_framebuffer" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x100a7a78, "device_create_bin_file" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "fb_sys_fops,sysimgblt,syscopyarea,sysfillrect");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "1B2628E6FE3931962BB8013");
