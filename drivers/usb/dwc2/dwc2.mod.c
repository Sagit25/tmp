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
	{ 0xe52de225, "regulator_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb099b57b, "usb_hcd_resume_root_hub" },
	{ 0x8b0f9f5a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x151c19be, "usb_wakeup_enabled_descendants" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc9251010, "dmam_alloc_attrs" },
	{ 0xe1c65d6f, "usb_phy_set_charger_current" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x9ae5b972, "of_usb_host_tpl_support" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0x1690b503, "usb_role_switch_get_drvdata" },
	{ 0x90afcfcb, "usb_get_dr_mode" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x8ec49d2e, "usb_get_role_switch_default_mode" },
	{ 0x7a41b9f2, "usb_ep_set_maxpacket_limit" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x92997ed8, "_printk" },
	{ 0x795f428d, "usb_hcd_map_urb_for_dma" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2bdf8c69, "usb_add_gadget_udc" },
	{ 0x16d405f1, "devm_usb_get_phy" },
	{ 0x8f4cd2f2, "phy_exit" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x129d08e7, "debugfs_create_regset32" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xcfff1e67, "usb_hcd_check_unlink_urb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3dc18f7e, "of_usb_update_otg_caps" },
	{ 0x209009ac, "of_match_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x23912872, "platform_get_resource" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x1378f9c7, "phy_reset" },
	{ 0xab03a9c3, "phy_power_on" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xeeb304ea, "usb_hcd_link_urb_to_ep" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0xd6d8b739, "dmam_free_coherent" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf31a5e34, "usb_gadget_unmap_request" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0xc1bb5a7d, "phy_power_off" },
	{ 0xd17d6d77, "usb_role_switch_register" },
	{ 0xd5aed153, "usb_put_hcd" },
	{ 0x99839e92, "usb_gadget_set_state" },
	{ 0xce568f51, "usb_hub_clear_tt_buffer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x7261cab4, "__devm_reset_control_get" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x908f2030, "usb_hcd_giveback_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x7be89624, "usb_gadget_giveback_request" },
	{ 0xca2f70e6, "usb_del_gadget_udc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x6b8c4477, "usb_create_hcd" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd87bdcae, "usb_debug_root" },
	{ 0xea124bd1, "gcd" },
	{ 0xd7c173ab, "usb_remove_hcd" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x70b4fe33, "devm_phy_get" },
	{ 0xb3c6f341, "single_open" },
	{ 0x8c65b5b0, "usb_hcd_unmap_urb_for_dma" },
	{ 0xff42c374, "usb_role_switch_get_role" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xde23410d, "usb_add_hcd" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x99921339, "usb_gadget_map_request" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1a7497, "phy_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BCM2848:*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usb");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usbC*");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usb");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usbC*");
MODULE_ALIAS("of:N*T*Cingenic,jz4775-otg");
MODULE_ALIAS("of:N*T*Cingenic,jz4775-otgC*");
MODULE_ALIAS("of:N*T*Cingenic,jz4780-otg");
MODULE_ALIAS("of:N*T*Cingenic,jz4780-otgC*");
MODULE_ALIAS("of:N*T*Cingenic,x1000-otg");
MODULE_ALIAS("of:N*T*Cingenic,x1000-otgC*");
MODULE_ALIAS("of:N*T*Cingenic,x1600-otg");
MODULE_ALIAS("of:N*T*Cingenic,x1600-otgC*");
MODULE_ALIAS("of:N*T*Cingenic,x1700-otg");
MODULE_ALIAS("of:N*T*Cingenic,x1700-otgC*");
MODULE_ALIAS("of:N*T*Cingenic,x1830-otg");
MODULE_ALIAS("of:N*T*Cingenic,x1830-otgC*");
MODULE_ALIAS("of:N*T*Cingenic,x2000-otg");
MODULE_ALIAS("of:N*T*Cingenic,x2000-otgC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usb");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usb");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usb");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usbC*");
MODULE_ALIAS("of:N*T*Csnps,dwc2");
MODULE_ALIAS("of:N*T*Csnps,dwc2C*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotg");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotgC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usbC*");
MODULE_ALIAS("of:N*T*Camcc,dwc-otg");
MODULE_ALIAS("of:N*T*Camcc,dwc-otgC*");
MODULE_ALIAS("of:N*T*Capm,apm82181-dwc-otg");
MODULE_ALIAS("of:N*T*Capm,apm82181-dwc-otgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-hsotgC*");
MODULE_ALIAS("of:N*T*Cintel,socfpga-agilex-hsotg");
MODULE_ALIAS("of:N*T*Cintel,socfpga-agilex-hsotgC*");

MODULE_INFO(srcversion, "EF7FCE27B235A06BA70511B");
