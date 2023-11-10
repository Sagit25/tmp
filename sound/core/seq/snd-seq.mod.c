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

SYMBOL_CRC(snd_use_lock_sync_helper, 0x3061c52d, "");
SYMBOL_CRC(snd_seq_client_ioctl_lock, 0xe50413d7, "_gpl");
SYMBOL_CRC(snd_seq_client_ioctl_unlock, 0xadb51cff, "_gpl");
SYMBOL_CRC(snd_seq_set_queue_tempo, 0xb8e448a0, "");
SYMBOL_CRC(snd_seq_create_kernel_client, 0x71272dbf, "");
SYMBOL_CRC(snd_seq_delete_kernel_client, 0x6bb71038, "");
SYMBOL_CRC(snd_seq_kernel_client_enqueue, 0x52707167, "");
SYMBOL_CRC(snd_seq_kernel_client_dispatch, 0x3fb4d161, "");
SYMBOL_CRC(snd_seq_kernel_client_ctl, 0x1a724fcc, "");
SYMBOL_CRC(snd_seq_kernel_client_write_poll, 0x683409ae, "");
SYMBOL_CRC(snd_seq_dump_var_event, 0xe934da1d, "");
SYMBOL_CRC(snd_seq_expand_var_event, 0x7ac2f329, "");
SYMBOL_CRC(snd_seq_event_port_attach, 0xb770f713, "");
SYMBOL_CRC(snd_seq_event_port_detach, 0x7b8699eb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe9182752, "snd_info_register" },
	{ 0xa9f96f2, "snd_info_create_module_entry" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0xf7a79376, "snd_seq_root" },
	{ 0xf4ce8324, "snd_timer_close" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2964344, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4ea05f50, "snd_timer_open" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xfec8d099, "snd_timer_start" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xb65b1669, "snd_timer_resolution" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5152260c, "snd_timer_pause" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x8c31bb98, "snd_unregister_device" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe508478a, "snd_timer_instance_new" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x51f7aae0, "snd_timer_instance_free" },
	{ 0x668b19a1, "down_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x3521c5ef, "snd_device_initialize" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf5f0f3fa, "pid_vnr" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x564b4d47, "snd_register_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xf32f0db2, "put_pid" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");


MODULE_INFO(srcversion, "776A10E07CA259BCE0FF624");
