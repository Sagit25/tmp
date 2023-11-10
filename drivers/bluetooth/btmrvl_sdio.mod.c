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
	{ 0xa98dc0ed, "sdio_register_driver" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xdbf8049f, "sdio_claim_host" },
	{ 0xbd58d3ea, "sdio_writeb" },
	{ 0x9f41fd76, "sdio_release_host" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x35f28641, "sdio_f0_readb" },
	{ 0x4233af5c, "sdio_readb" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa75f6858, "sdio_get_host_pm_caps" },
	{ 0x3f14a929, "hci_resume_dev" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa46c724e, "hci_suspend_dev" },
	{ 0x57c559a8, "btmrvl_enable_hs" },
	{ 0x9e718982, "sdio_set_host_pm_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x38b30f21, "sdio_unregister_driver" },
	{ 0x798dba96, "sdio_readsb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9da78e02, "btmrvl_interrupt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3dc9d822, "sdio_writesb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x999e8297, "vfree" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x96848186, "scnprintf" },
	{ 0x549241c, "dev_coredumpv" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc0ebb3a6, "btmrvl_process_event" },
	{ 0xe6e3fae0, "btmrvl_check_evtpkt" },
	{ 0xbec65b85, "hci_recv_frame" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xc16e3eae, "sdio_enable_func" },
	{ 0x234daf4b, "sdio_claim_irq" },
	{ 0x59686cc4, "sdio_set_block_size" },
	{ 0x74a05018, "request_firmware" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x214f6bab, "of_match_node" },
	{ 0x20af50d6, "irq_of_parse_and_map" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xc54fd5c3, "btmrvl_add_card" },
	{ 0x1b96a0bc, "btmrvl_register_hdev" },
	{ 0x416322ae, "sdio_release_irq" },
	{ 0x3871aaa7, "sdio_disable_func" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x92f143b5, "btmrvl_remove_card" },
	{ 0xccba8538, "btmrvl_send_module_cfg_cmd" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btmrvl");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "868AE815AFF2948B912965F");
