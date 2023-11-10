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

SYMBOL_CRC(vhost_work_init, 0xa909cfc5, "_gpl");
SYMBOL_CRC(vhost_poll_init, 0xa4d9d2ee, "_gpl");
SYMBOL_CRC(vhost_poll_start, 0xb4f11b54, "_gpl");
SYMBOL_CRC(vhost_poll_stop, 0xd8f22ffd, "_gpl");
SYMBOL_CRC(vhost_dev_flush, 0x9fa67180, "_gpl");
SYMBOL_CRC(vhost_work_queue, 0xabf66dd4, "_gpl");
SYMBOL_CRC(vhost_has_work, 0x79fd6592, "_gpl");
SYMBOL_CRC(vhost_poll_queue, 0x9bd74721, "_gpl");
SYMBOL_CRC(vhost_vq_is_setup, 0x1a85a03d, "_gpl");
SYMBOL_CRC(vhost_exceeds_weight, 0x94a02de2, "_gpl");
SYMBOL_CRC(vhost_dev_init, 0x7e3f1e25, "_gpl");
SYMBOL_CRC(vhost_dev_check_owner, 0xadfa2640, "_gpl");
SYMBOL_CRC(vhost_dev_has_owner, 0xc94e61e0, "_gpl");
SYMBOL_CRC(vhost_dev_set_owner, 0xeef364ac, "_gpl");
SYMBOL_CRC(vhost_dev_reset_owner_prepare, 0xfd2b3e45, "_gpl");
SYMBOL_CRC(vhost_dev_reset_owner, 0x341af2f9, "_gpl");
SYMBOL_CRC(vhost_dev_stop, 0xcf0e30e0, "_gpl");
SYMBOL_CRC(vhost_clear_msg, 0x39d0870c, "_gpl");
SYMBOL_CRC(vhost_dev_cleanup, 0xdb70ec42, "_gpl");
SYMBOL_CRC(vhost_chr_write_iter, 0xaa994492, "");
SYMBOL_CRC(vhost_chr_poll, 0xbc10f5ec, "");
SYMBOL_CRC(vhost_chr_read_iter, 0x7cef87f9, "_gpl");
SYMBOL_CRC(vq_meta_prefetch, 0xbd9351d5, "_gpl");
SYMBOL_CRC(vhost_log_access_ok, 0xe457155b, "_gpl");
SYMBOL_CRC(vhost_vq_access_ok, 0x74ad9020, "_gpl");
SYMBOL_CRC(vhost_vring_ioctl, 0xe41fcdab, "_gpl");
SYMBOL_CRC(vhost_init_device_iotlb, 0x85ba4fb0, "_gpl");
SYMBOL_CRC(vhost_dev_ioctl, 0x8954e50b, "_gpl");
SYMBOL_CRC(vhost_log_write, 0xf7e10bee, "_gpl");
SYMBOL_CRC(vhost_vq_init_access, 0x2c16151c, "_gpl");
SYMBOL_CRC(vhost_get_vq_desc, 0x841206e5, "_gpl");
SYMBOL_CRC(vhost_discard_vq_desc, 0xd39a53af, "_gpl");
SYMBOL_CRC(vhost_add_used, 0xd61c08c9, "_gpl");
SYMBOL_CRC(vhost_add_used_n, 0x62994998, "_gpl");
SYMBOL_CRC(vhost_signal, 0xf36c576f, "_gpl");
SYMBOL_CRC(vhost_add_used_and_signal, 0x4244002a, "_gpl");
SYMBOL_CRC(vhost_add_used_and_signal_n, 0xa3dc29cc, "_gpl");
SYMBOL_CRC(vhost_vq_avail_empty, 0xbeccd086, "_gpl");
SYMBOL_CRC(vhost_enable_notify, 0xc583d531, "_gpl");
SYMBOL_CRC(vhost_disable_notify, 0x391b299a, "_gpl");
SYMBOL_CRC(vhost_new_msg, 0x56bea77f, "_gpl");
SYMBOL_CRC(vhost_enqueue_msg, 0xde29959d, "_gpl");
SYMBOL_CRC(vhost_dequeue_msg, 0x8ecb6ebe, "_gpl");
SYMBOL_CRC(vhost_set_backend_features, 0x9d632447, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa6257a2f, "complete" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x14d1b8b, "cgroup_attach_task_all" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x6bfe2b87, "mmput" },
	{ 0xae3912db, "__mmdrop" },
	{ 0xc577832d, "vhost_iotlb_alloc" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa24517eb, "vhost_iotlb_free" },
	{ 0xcb5d0615, "pin_user_pages_fast" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2c5b8bc3, "unpin_user_pages_dirty_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xe2bce892, "fput" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x1a510479, "kthread_use_mm" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x4e65cd50, "kthread_unuse_mm" },
	{ 0x1000e51, "schedule" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x69e872f9, "vhost_iotlb_itree_first" },
	{ 0xa832ce1, "iov_iter_init" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeb803415, "get_task_mm" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x38ff875f, "vhost_iotlb_add_range" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x1ca380be, "iov_iter_advance" },
	{ 0x6bec0e66, "vhost_iotlb_del_range" },
	{ 0x8db6b5a1, "eventfd_fget" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vhost_iotlb");


MODULE_INFO(srcversion, "E49B1EB9E9E41BF50C60A0C");
