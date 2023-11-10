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

SYMBOL_CRC(fsg_common_set_sysfs, 0x7e26d4a5, "_gpl");
SYMBOL_CRC(fsg_common_set_num_buffers, 0x1ccb58f7, "_gpl");
SYMBOL_CRC(fsg_common_remove_lun, 0x39640092, "_gpl");
SYMBOL_CRC(fsg_common_remove_luns, 0x141fce2a, "_gpl");
SYMBOL_CRC(fsg_common_free_buffers, 0x9a0221c7, "_gpl");
SYMBOL_CRC(fsg_common_set_cdev, 0x19c5f0fd, "_gpl");
SYMBOL_CRC(fsg_common_create_lun, 0x3c6a07d0, "_gpl");
SYMBOL_CRC(fsg_common_create_luns, 0xd1a3e8e0, "_gpl");
SYMBOL_CRC(fsg_common_set_inquiry_string, 0x6acb4179, "_gpl");
SYMBOL_CRC(fsg_config_from_params, 0xab6c68ac, "_gpl");
SYMBOL_CRC(fsg_intf_desc, 0xb52ba28a, "_gpl");
SYMBOL_CRC(fsg_fs_bulk_in_desc, 0xb54d0d95, "_gpl");
SYMBOL_CRC(fsg_fs_bulk_out_desc, 0x1710b539, "_gpl");
SYMBOL_CRC(fsg_fs_function, 0xa5f99b69, "_gpl");
SYMBOL_CRC(fsg_hs_bulk_in_desc, 0x95cffb3e, "_gpl");
SYMBOL_CRC(fsg_hs_bulk_out_desc, 0x56344daf, "_gpl");
SYMBOL_CRC(fsg_hs_function, 0x857b6dc2, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_in_desc, 0x2933ee1d, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_in_comp_desc, 0x423845e4, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_out_desc, 0xf4efc0c8, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_out_comp_desc, 0xa5cae92f, "_gpl");
SYMBOL_CRC(fsg_ss_function, 0x398778e1, "_gpl");
SYMBOL_CRC(fsg_lun_close, 0x5ff637c9, "_gpl");
SYMBOL_CRC(fsg_lun_open, 0x41df1d5d, "_gpl");
SYMBOL_CRC(fsg_lun_fsync_sub, 0x5586e134, "_gpl");
SYMBOL_CRC(store_cdrom_address, 0xb3adf38d, "_gpl");
SYMBOL_CRC(fsg_show_ro, 0x05e8c222, "_gpl");
SYMBOL_CRC(fsg_show_nofua, 0xafcf87d2, "_gpl");
SYMBOL_CRC(fsg_show_file, 0x0050df70, "_gpl");
SYMBOL_CRC(fsg_show_cdrom, 0xfc5ef552, "_gpl");
SYMBOL_CRC(fsg_show_removable, 0x6c3b59a0, "_gpl");
SYMBOL_CRC(fsg_show_inquiry_string, 0x739df3e4, "_gpl");
SYMBOL_CRC(fsg_store_ro, 0x51a73bac, "_gpl");
SYMBOL_CRC(fsg_store_nofua, 0x91d262ab, "_gpl");
SYMBOL_CRC(fsg_store_file, 0x427d7d4f, "_gpl");
SYMBOL_CRC(fsg_store_cdrom, 0x76cd1d43, "_gpl");
SYMBOL_CRC(fsg_store_removable, 0x303252d2, "_gpl");
SYMBOL_CRC(fsg_store_inquiry_string, 0x77b465b1, "_gpl");
SYMBOL_CRC(fsg_store_forced_eject, 0xa2f3b5f2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7665d7dd, "filp_open" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0xa945b6da, "invalidate_mapping_pages" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x12d0b536, "send_sig_info" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0xf7a60265, "I_BDEV" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xfa69a22d, "usb_composite_setup_continue" },
	{ 0x829925fd, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2bce892, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8cc39adf, "unregister_gadget_item" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x4c74bd14, "device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe6f1549b, "kernel_read" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x5adffc88, "vfs_fsync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xef6022d0, "file_path" },
	{ 0xf0b55e33, "config_item_put" },
	{ 0xacfe2e7, "usb_ep_set_wedge" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0x349cba85, "strchr" },
	{ 0x183a459, "dequeue_signal" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0x53b954a2, "up_read" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xc43a004e, "kernel_write" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "D63CBD0CDA83CFCB6717614");
