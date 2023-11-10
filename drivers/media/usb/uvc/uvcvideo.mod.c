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
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x4bca5638, "v4l2_fh_exit" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xe914e41e, "strcpy" },
	{ 0x219ec1bf, "usb_put_intf" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xd55b3931, "vb2_streamoff" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x7cc57f43, "vb2_queue_release" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0xea2d41e3, "usb_get_current_frame_number" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0xf60b4b75, "vb2_poll" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0x682547e2, "dma_vunmap_noncontiguous" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x1809de45, "dma_sync_sg_for_cpu" },
	{ 0x30d3cec7, "usb_match_one_id" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0xad5c3c93, "v4l2_simplify_fraction" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a5c9022, "vb2_dqbuf" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x6f6a0a31, "v4l2_subdev_init" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x878e81de, "usb_get_intf" },
	{ 0xd5d214b7, "vb2_reqbufs" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xcaaa3030, "v4l2_device_register_subdev" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x2345d009, "input_free_device" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xf1564295, "input_register_device" },
	{ 0xf564cc31, "vb2_expbuf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xa81885a7, "vb2_streamon" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1c6136ce, "vb2_querybuf" },
	{ 0x3b64bfce, "dma_vmap_noncontiguous" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xdc7c8cb3, "vb2_qbuf" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xfd48fb29, "usb_poison_urb" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x5a7bab55, "usb_string" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x58dc77b9, "dma_sync_sg_for_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x5074e573, "v4l2_fraction_to_interval" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x441916ec, "input_event" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x60a6f476, "dma_free_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7b0a4aa6, "dma_alloc_noncontiguous" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x856d75d, "usb_enable_autosuspend" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd352d9b5, "vb2_create_bufs" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd87bdcae, "usb_debug_root" },
	{ 0x18da83af, "vb2_mmap" },
	{ 0x98cf60b3, "strlen" },
	{ 0x97f91466, "_dev_printk" },
	{ 0xb0524d5e, "v4l2_event_queue_fh" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v0408p3090d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0408p4030d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0408p4034d*dc*dsc*dp*ic0Eisc01ip01in*");
MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp0821d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp0823d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB5EBd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB6BAd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB746d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8514d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1BCFp0B40d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v3277p0072d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v5986p1172d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "55A010ACCE86EA2ACA4AC0D");
