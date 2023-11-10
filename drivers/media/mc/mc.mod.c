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

SYMBOL_CRC(media_device_register_entity, 0x89f73718, "_gpl");
SYMBOL_CRC(media_device_unregister_entity, 0x69b7d204, "_gpl");
SYMBOL_CRC(media_device_init, 0x4a3bb5af, "_gpl");
SYMBOL_CRC(media_device_cleanup, 0x81cd8c1f, "_gpl");
SYMBOL_CRC(__media_device_register, 0xc07b2c9d, "_gpl");
SYMBOL_CRC(media_device_register_entity_notify, 0x72135dec, "_gpl");
SYMBOL_CRC(media_device_unregister_entity_notify, 0x439106b8, "_gpl");
SYMBOL_CRC(media_device_unregister, 0x11474f30, "_gpl");
SYMBOL_CRC(media_device_pci_init, 0x80ea06a9, "_gpl");
SYMBOL_CRC(__media_device_usb_init, 0x1fe316f5, "_gpl");
SYMBOL_CRC(media_entity_enum_init, 0xa402736e, "_gpl");
SYMBOL_CRC(media_entity_enum_cleanup, 0xe5ceecd6, "_gpl");
SYMBOL_CRC(media_entity_pads_init, 0x85023b60, "_gpl");
SYMBOL_CRC(media_graph_walk_init, 0xbe26d96a, "_gpl");
SYMBOL_CRC(media_graph_walk_cleanup, 0x4ac0ec4c, "_gpl");
SYMBOL_CRC(media_graph_walk_start, 0x9835b4a7, "_gpl");
SYMBOL_CRC(media_graph_walk_next, 0xc49ebaa5, "_gpl");
SYMBOL_CRC(__media_pipeline_start, 0x8216525f, "_gpl");
SYMBOL_CRC(media_pipeline_start, 0x58c0838c, "_gpl");
SYMBOL_CRC(__media_pipeline_stop, 0x9bff4604, "_gpl");
SYMBOL_CRC(media_pipeline_stop, 0x48d2897b, "_gpl");
SYMBOL_CRC(media_pipeline_alloc_start, 0xcc517751, "_gpl");
SYMBOL_CRC(media_get_pad_index, 0xfe74f7f4, "_gpl");
SYMBOL_CRC(media_create_pad_link, 0xa94bf655, "_gpl");
SYMBOL_CRC(media_create_pad_links, 0xa44117d4, "_gpl");
SYMBOL_CRC(__media_entity_remove_links, 0x03350643, "_gpl");
SYMBOL_CRC(media_entity_remove_links, 0xb5696901, "_gpl");
SYMBOL_CRC(__media_entity_setup_link, 0x786276cf, "_gpl");
SYMBOL_CRC(media_entity_setup_link, 0xc1d60bee, "_gpl");
SYMBOL_CRC(media_entity_find_link, 0x73e48c4c, "_gpl");
SYMBOL_CRC(media_pad_remote_pad_first, 0x1f015c96, "_gpl");
SYMBOL_CRC(media_entity_remote_pad_unique, 0xf36917d0, "_gpl");
SYMBOL_CRC(media_pad_remote_pad_unique, 0x696d73f9, "_gpl");
SYMBOL_CRC(media_entity_get_fwnode_pad, 0x0cc00077, "_gpl");
SYMBOL_CRC(media_entity_pipeline, 0x3824c66b, "_gpl");
SYMBOL_CRC(media_pad_pipeline, 0xa3a7de42, "_gpl");
SYMBOL_CRC(media_devnode_create, 0x02905ad4, "_gpl");
SYMBOL_CRC(media_devnode_remove, 0xfe0e58c4, "_gpl");
SYMBOL_CRC(media_create_intf_link, 0xf1f43905, "_gpl");
SYMBOL_CRC(__media_remove_intf_link, 0x12a86257, "_gpl");
SYMBOL_CRC(media_remove_intf_link, 0x84f7da61, "_gpl");
SYMBOL_CRC(__media_remove_intf_links, 0x06c973a9, "_gpl");
SYMBOL_CRC(media_remove_intf_links, 0x9ead0f7a, "_gpl");
SYMBOL_CRC(media_create_ancillary_link, 0x2eb22d11, "_gpl");
SYMBOL_CRC(__media_entity_next_link, 0x285b245f, "_gpl");
SYMBOL_CRC(media_request_put, 0xb00fd319, "_gpl");
SYMBOL_CRC(media_request_get_by_fd, 0x42d4c066, "_gpl");
SYMBOL_CRC(media_request_object_find, 0x3508dfcb, "_gpl");
SYMBOL_CRC(media_request_object_put, 0x0779068b, "_gpl");
SYMBOL_CRC(media_request_object_init, 0x52b42b77, "_gpl");
SYMBOL_CRC(media_request_object_bind, 0x3940bfd8, "_gpl");
SYMBOL_CRC(media_request_object_unbind, 0xce496eec, "_gpl");
SYMBOL_CRC(media_request_object_complete, 0x6bf19ffa, "_gpl");
SYMBOL_CRC(media_request_pin, 0xdd09586e, "_gpl");
SYMBOL_CRC(media_request_unpin, 0x4643a686, "_gpl");
SYMBOL_CRC(media_device_usb_allocate, 0xd6cdec63, "_gpl");
SYMBOL_CRC(media_device_delete, 0xf7474583, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1425e33, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x21fbe96a, "anon_inode_getfile" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x9a02d912, "fd_install" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x92997ed8, "_printk" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x49b918c, "fwnode_graph_parse_endpoint" },
	{ 0xcc793c4a, "module_put" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0xe2bce892, "fput" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffb7c514, "ida_free" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x74ba4e3d, "platform_bus_type" },
	{ 0xef2a3de4, "kobject_set_name" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cba88c1, "pci_bus_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xeb280106, "bus_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C36A8060C46D5A6EFF99A60");
