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
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x54e5792b, "regmap_get_device" },
	{ 0xad9b0ff1, "devm_hwmon_device_register_with_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x9fbffb21, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x663b757a, "video_devdata" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0xba894707, "__regmap_init_i2c" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0x2b14ac1c, "devm_nvmem_register" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,regmap-i2c,videobuf2-vmalloc,videobuf2-v4l2,videobuf2-common");

MODULE_ALIAS("of:N*T*Cpanasonic,amg88xx");
MODULE_ALIAS("of:N*T*Cpanasonic,amg88xxC*");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640C*");
MODULE_ALIAS("i2c:amg88xx");
MODULE_ALIAS("i2c:mlx90640");

MODULE_INFO(srcversion, "BD731C4A142517EACB5F4F4");
