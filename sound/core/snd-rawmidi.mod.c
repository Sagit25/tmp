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

SYMBOL_CRC(snd_rawmidi_drop_output, 0xf2396e57, "");
SYMBOL_CRC(snd_rawmidi_drain_output, 0xbd4167bb, "");
SYMBOL_CRC(snd_rawmidi_drain_input, 0xd0c0261d, "");
SYMBOL_CRC(snd_rawmidi_kernel_open, 0xd49674ac, "");
SYMBOL_CRC(snd_rawmidi_kernel_release, 0x6e55f56f, "");
SYMBOL_CRC(snd_rawmidi_info_select, 0x54ee7db8, "");
SYMBOL_CRC(snd_rawmidi_output_params, 0x40464112, "");
SYMBOL_CRC(snd_rawmidi_input_params, 0xbeee216b, "");
SYMBOL_CRC(snd_rawmidi_receive, 0x635c6b0b, "");
SYMBOL_CRC(snd_rawmidi_kernel_read, 0x0842cd08, "");
SYMBOL_CRC(snd_rawmidi_transmit_empty, 0xc6a33fdc, "");
SYMBOL_CRC(snd_rawmidi_transmit_peek, 0xa5a6cdea, "");
SYMBOL_CRC(snd_rawmidi_transmit_ack, 0x932d368d, "");
SYMBOL_CRC(snd_rawmidi_transmit, 0x3a18ddba, "");
SYMBOL_CRC(snd_rawmidi_proceed, 0x3ac044bd, "");
SYMBOL_CRC(snd_rawmidi_kernel_write, 0x880da99f, "");
SYMBOL_CRC(snd_rawmidi_new, 0xebc992b1, "");
SYMBOL_CRC(snd_rawmidi_set_ops, 0x803eac35, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x1425e33, "try_module_get" },
	{ 0xe9182752, "snd_info_register" },
	{ 0xf854d979, "snd_ctl_unregister_ioctl_compat" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5844d287, "snd_seq_device_new" },
	{ 0x721ba658, "snd_ctl_get_preferred_subdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x29329ea9, "snd_unregister_oss_device" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5c08605f, "snd_register_oss_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x4a5512d2, "snd_ctl_register_ioctl" },
	{ 0x5157fceb, "snd_card_file_add" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x8c31bb98, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x775feec3, "snd_ctl_unregister_ioctl" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x135cafbc, "snd_ctl_register_ioctl_compat" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc5964c3, "snd_info_create_card_entry" },
	{ 0x3521c5ef, "snd_device_initialize" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf5f0f3fa, "pid_vnr" },
	{ 0x75f40f00, "snd_card_file_remove" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x58afcfe4, "snd_device_register" },
	{ 0x564b4d47, "snd_register_device" },
	{ 0xf32f0db2, "put_pid" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "6A0D44900D66B14264B89CA");
