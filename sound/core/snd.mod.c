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

SYMBOL_CRC(snd_major, 0x8f595b11, "");
SYMBOL_CRC(snd_ecards_limit, 0x3971b4df, "");
SYMBOL_CRC(snd_request_card, 0x4a3ea5c0, "");
SYMBOL_CRC(snd_lookup_minor_data, 0xb2e5ae4a, "");
SYMBOL_CRC(snd_register_device, 0x564b4d47, "");
SYMBOL_CRC(snd_unregister_device, 0x8c31bb98, "");
SYMBOL_CRC(snd_device_initialize, 0x3521c5ef, "_gpl");
SYMBOL_CRC(snd_card_new, 0xcf12e895, "");
SYMBOL_CRC(snd_devm_card_new, 0xb7cdc83d, "_gpl");
SYMBOL_CRC(snd_card_free_on_error, 0xba5fba3e, "_gpl");
SYMBOL_CRC(snd_card_ref, 0xbeff3891, "_gpl");
SYMBOL_CRC(snd_card_disconnect, 0xf45fb4de, "");
SYMBOL_CRC(snd_card_disconnect_sync, 0x46af572f, "_gpl");
SYMBOL_CRC(snd_card_free_when_closed, 0xe5cfa168, "");
SYMBOL_CRC(snd_card_free, 0x510abc69, "");
SYMBOL_CRC(snd_card_set_id, 0x9e67059c, "");
SYMBOL_CRC(snd_card_add_dev_attr, 0x19728918, "_gpl");
SYMBOL_CRC(snd_card_register, 0x3db5e5b3, "");
SYMBOL_CRC(snd_component_add, 0xc2935cfa, "");
SYMBOL_CRC(snd_card_file_add, 0x5157fceb, "");
SYMBOL_CRC(snd_card_file_remove, 0x75f40f00, "");
SYMBOL_CRC(snd_power_ref_and_wait, 0x598d3f1c, "_gpl");
SYMBOL_CRC(snd_power_wait, 0xff41f733, "");
SYMBOL_CRC(copy_to_user_fromio, 0x342a2354, "");
SYMBOL_CRC(copy_from_user_toio, 0xfffd89db, "");
SYMBOL_CRC(snd_ctl_notify, 0x37230f5c, "");
SYMBOL_CRC(snd_ctl_notify_one, 0x806cfca8, "");
SYMBOL_CRC(snd_ctl_new1, 0x276c036d, "");
SYMBOL_CRC(snd_ctl_free_one, 0x68f24aaa, "");
SYMBOL_CRC(snd_ctl_add, 0x4ac4929f, "");
SYMBOL_CRC(snd_ctl_replace, 0x8bfc1d57, "");
SYMBOL_CRC(snd_ctl_remove, 0xfd5957ab, "");
SYMBOL_CRC(snd_ctl_remove_id, 0xf4396902, "");
SYMBOL_CRC(snd_ctl_activate_id, 0xc9bd85c1, "_gpl");
SYMBOL_CRC(snd_ctl_rename_id, 0x1d37dbe2, "");
SYMBOL_CRC(snd_ctl_rename, 0xb471a684, "");
SYMBOL_CRC(snd_ctl_find_numid, 0x16149e5d, "");
SYMBOL_CRC(snd_ctl_find_id, 0x37b95942, "");
SYMBOL_CRC(snd_ctl_register_ioctl, 0x4a5512d2, "");
SYMBOL_CRC(snd_ctl_register_ioctl_compat, 0x135cafbc, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl, 0x775feec3, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl_compat, 0xf854d979, "");
SYMBOL_CRC(snd_ctl_get_preferred_subdevice, 0x721ba658, "_gpl");
SYMBOL_CRC(snd_ctl_request_layer, 0xfaf598c6, "_gpl");
SYMBOL_CRC(snd_ctl_register_layer, 0x5e010839, "_gpl");
SYMBOL_CRC(snd_ctl_disconnect_layer, 0x525cc319, "_gpl");
SYMBOL_CRC(snd_ctl_boolean_mono_info, 0xbc825a83, "");
SYMBOL_CRC(snd_ctl_boolean_stereo_info, 0xdb7acd4c, "");
SYMBOL_CRC(snd_ctl_enum_info, 0xcc6a729f, "");
SYMBOL_CRC(release_and_free_resource, 0xc5a6d10b, "");
SYMBOL_CRC(snd_pci_quirk_lookup_id, 0x73076315, "");
SYMBOL_CRC(snd_pci_quirk_lookup, 0x374028e5, "");
SYMBOL_CRC(snd_fasync_helper, 0x9fb11fac, "_gpl");
SYMBOL_CRC(snd_kill_fasync, 0xf8f2a4eb, "_gpl");
SYMBOL_CRC(snd_fasync_free, 0x5af762f1, "_gpl");
SYMBOL_CRC(snd_device_new, 0x021f8804, "");
SYMBOL_CRC(snd_device_disconnect, 0x9d76a8ab, "_gpl");
SYMBOL_CRC(snd_device_free, 0x9abd5901, "");
SYMBOL_CRC(snd_device_register, 0x58afcfe4, "");
SYMBOL_CRC(snd_device_get_state, 0x4fcdaa0d, "_gpl");
SYMBOL_CRC(snd_seq_root, 0xf7a79376, "");
SYMBOL_CRC(snd_info_get_line, 0x24a94b26, "");
SYMBOL_CRC(snd_info_get_str, 0x9e6d79f8, "");
SYMBOL_CRC(snd_info_create_module_entry, 0x0a9f96f2, "");
SYMBOL_CRC(snd_info_create_card_entry, 0x0c5964c3, "");
SYMBOL_CRC(snd_info_free_entry, 0x8360c53b, "");
SYMBOL_CRC(snd_info_register, 0xe9182752, "");
SYMBOL_CRC(snd_card_rw_proc_new, 0xa4829776, "_gpl");
SYMBOL_CRC(snd_oss_info_register, 0x8df3789f, "");
SYMBOL_CRC(snd_lookup_oss_minor_data, 0x198788b4, "");
SYMBOL_CRC(snd_register_oss_device, 0x5c08605f, "");
SYMBOL_CRC(snd_unregister_oss_device, 0x29329ea9, "");
SYMBOL_CRC(_snd_ctl_add_follower, 0xdf2a8f08, "");
SYMBOL_CRC(snd_ctl_make_virtual_master, 0x25761cc4, "");
SYMBOL_CRC(snd_ctl_add_vmaster_hook, 0xa9b4c807, "_gpl");
SYMBOL_CRC(snd_ctl_sync_vmaster, 0x19145a65, "_gpl");
SYMBOL_CRC(snd_ctl_apply_vmaster_followers, 0x70114b88, "_gpl");
SYMBOL_CRC(snd_jack_add_new_kctl, 0x1ea924a4, "");
SYMBOL_CRC(snd_jack_new, 0x4d04246c, "");
SYMBOL_CRC(snd_jack_set_parent, 0xa2ab8e88, "");
SYMBOL_CRC(snd_jack_set_key, 0xdd7f7465, "");
SYMBOL_CRC(snd_jack_report, 0x7efc1a59, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5570945b, "kill_fasync" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x506b5aea, "proc_mkdir_mode" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0xe7257ab8, "xa_store_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x6612133d, "proc_create_data" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd1d09c7b, "devm_remove_action" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x28eced4f, "devres_add" },
	{ 0x142f8301, "single_open_size" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x2345d009, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x315981da, "register_sound_special_device" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xcc793c4a, "module_put" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x61651be, "strcat" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x7bbe500c, "device_add" },
	{ 0x9177debf, "init_uts_ns" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0xf1e046cc, "panic" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x402beac3, "device_del" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x441916ec, "input_event" },
	{ 0x5da0a311, "proc_remove" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x745a981, "xa_erase" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xbc2a5865, "proc_set_size" },
	{ 0x41fabaf5, "__register_chrdev" },
	{ 0xef2a3de4, "kobject_set_name" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf5f0f3fa, "pid_vnr" },
	{ 0x65986fe0, "devres_find" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x566844f6, "sound_class" },
	{ 0xc5e74216, "release_resource" },
	{ 0x98cf60b3, "strlen" },
	{ 0x22648036, "proc_symlink" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb3c6f341, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xf32f0db2, "put_pid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24928559DA21DBEF3EE7E8C");
