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
	{ 0x85ba4fb0, "vhost_init_device_iotlb" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0xe41fcdab, "vhost_vring_ioctl" },
	{ 0x53469225, "tap_get_ptr_ring" },
	{ 0x9fa67180, "vhost_dev_flush" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0x74ad9020, "vhost_vq_access_ok" },
	{ 0xcf0e30e0, "vhost_dev_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8385ebf5, "tap_get_socket" },
	{ 0x1ca380be, "iov_iter_advance" },
	{ 0x3ca255f5, "fget" },
	{ 0x7e3f1e25, "vhost_dev_init" },
	{ 0x79fd6592, "vhost_has_work" },
	{ 0x341af2f9, "vhost_dev_reset_owner" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa832ce1, "iov_iter_init" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa4d9d2ee, "vhost_poll_init" },
	{ 0x2c16151c, "vhost_vq_init_access" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xd8f22ffd, "vhost_poll_stop" },
	{ 0x5c084fc2, "tun_get_tx_ring" },
	{ 0x1000e51, "schedule" },
	{ 0x94a02de2, "vhost_exceeds_weight" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9bd74721, "vhost_poll_queue" },
	{ 0x2b3cb3be, "tun_get_socket" },
	{ 0xd39a53af, "vhost_discard_vq_desc" },
	{ 0x4244002a, "vhost_add_used_and_signal" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2bce892, "fput" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfd2b3e45, "vhost_dev_reset_owner_prepare" },
	{ 0xa3dc29cc, "vhost_add_used_and_signal_n" },
	{ 0xeef364ac, "vhost_dev_set_owner" },
	{ 0xaa994492, "vhost_chr_write_iter" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x841206e5, "vhost_get_vq_desc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7cef87f9, "vhost_chr_read_iter" },
	{ 0xf7e10bee, "vhost_log_write" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x8954e50b, "vhost_dev_ioctl" },
	{ 0x96601bbe, "misc_register" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x391b299a, "vhost_disable_notify" },
	{ 0xc94e61e0, "vhost_dev_has_owner" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x39d0870c, "vhost_clear_msg" },
	{ 0x9d632447, "vhost_set_backend_features" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xc583d531, "vhost_enable_notify" },
	{ 0xe412fbd2, "copy_page_from_iter" },
	{ 0x15ab450d, "__page_frag_cache_drain" },
	{ 0xe457155b, "vhost_log_access_ok" },
	{ 0xdb70ec42, "vhost_dev_cleanup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbc10f5ec, "vhost_chr_poll" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xb4f11b54, "vhost_poll_start" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbd9351d5, "vq_meta_prefetch" },
	{ 0xadfa2640, "vhost_dev_check_owner" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xbeccd086, "vhost_vq_avail_empty" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vhost,tap,tun");


MODULE_INFO(srcversion, "BB7CE279393587E6B7FA483");
