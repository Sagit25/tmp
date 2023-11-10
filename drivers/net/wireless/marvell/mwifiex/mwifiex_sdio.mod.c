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
	{ 0xe914e41e, "strcpy" },
	{ 0x9f41fd76, "sdio_release_host" },
	{ 0x3871aaa7, "sdio_disable_func" },
	{ 0x59686cc4, "sdio_set_block_size" },
	{ 0xa211092b, "mwifiex_init_shutdown_fw" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0xe44e5bbd, "mwifiex_drv_info_dump" },
	{ 0xdbf8049f, "sdio_claim_host" },
	{ 0xa98dc0ed, "sdio_register_driver" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3b9a0924, "mwifiex_upload_device_dump" },
	{ 0x34ce5d71, "mwifiex_enable_hs" },
	{ 0x1ac4575c, "mwifiex_remove_card" },
	{ 0x3f54362d, "mwifiex_deauthenticate_all" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf25075f5, "mwifiex_handle_rx_packet" },
	{ 0xb52508fa, "mwifiex_reinit_sw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x35f28641, "sdio_f0_readb" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x416322ae, "sdio_release_irq" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x668bd081, "mwifiex_dnld_fw" },
	{ 0x9e718982, "sdio_set_host_pm_flags" },
	{ 0x38b30f21, "sdio_unregister_driver" },
	{ 0x798dba96, "sdio_readsb" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x121445a5, "skb_pull" },
	{ 0xb38e2bdf, "mwifiex_shutdown_sw" },
	{ 0x214f6bab, "of_match_node" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcbcb770e, "mwifiex_add_card" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdef0904a, "_mwifiex_dbg" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xa75f6858, "sdio_get_host_pm_caps" },
	{ 0xa89a4a52, "mwifiex_prepare_fw_dump_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xae8932dc, "mwifiex_main_process" },
	{ 0x999e8297, "vfree" },
	{ 0x44501d02, "mwifiex_process_sleep_confirm_resp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xc8073963, "mwifiex_disable_auto_ds" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x99b097e8, "mmc_hw_reset" },
	{ 0x234daf4b, "sdio_claim_irq" },
	{ 0xc16e3eae, "sdio_enable_func" },
	{ 0x3dc9d822, "sdio_writesb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf178d9f0, "mwifiex_cancel_hs" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4233af5c, "sdio_readb" },
	{ 0xbd58d3ea, "sdio_writeb" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "C61CBD7F47BE35D3DD0BD16");
