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
	{ 0xd5e35706, "lbs_notify_command_response" },
	{ 0x9f41fd76, "sdio_release_host" },
	{ 0x3871aaa7, "sdio_disable_func" },
	{ 0x59686cc4, "sdio_set_block_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x48471741, "skb_put" },
	{ 0xdbf8049f, "sdio_claim_host" },
	{ 0xa98dc0ed, "sdio_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb05c43aa, "mmc_remove_host" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x85a552e, "netdev_err" },
	{ 0x549b57bc, "mmc_add_host" },
	{ 0x35f28641, "sdio_f0_readb" },
	{ 0xb997ae48, "lbs_add_card" },
	{ 0x5526dbdc, "sdio_align_size" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf019fb93, "lbs_host_to_card_done" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x416322ae, "sdio_release_irq" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x30a16418, "lbs_process_rxed_packet" },
	{ 0x9e718982, "sdio_set_host_pm_flags" },
	{ 0x8f2e623f, "sdio_f0_writeb" },
	{ 0x6923a98f, "lbs_remove_card" },
	{ 0x38b30f21, "sdio_unregister_driver" },
	{ 0x798dba96, "sdio_readsb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x924df963, "lbs_suspend" },
	{ 0x42a661eb, "lbs_cmd_copyback" },
	{ 0x83aa40e7, "lbs_get_firmware_async" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xea38cdb2, "lbs_queue_event" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xf05478bd, "lbs_start_card" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa75f6858, "sdio_get_host_pm_caps" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6894491e, "__lbs_cmd" },
	{ 0xcfa6b507, "netdev_alert" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xe42419fc, "lbs_stop_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x234daf4b, "sdio_claim_irq" },
	{ 0xc16e3eae, "sdio_enable_func" },
	{ 0x3dc9d822, "sdio_writesb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe082fc02, "lbs_resume" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4233af5c, "sdio_readb" },
	{ 0xbd58d3ea, "sdio_writeb" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "12BEFE9A4E42403FC050CA3");
