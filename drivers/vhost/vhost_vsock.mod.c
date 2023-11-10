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
	{ 0xd61c08c9, "vhost_add_used" },
	{ 0x154e4da3, "virtio_transport_notify_recv_init" },
	{ 0x85ba4fb0, "vhost_init_device_iotlb" },
	{ 0x14a6dd35, "virtio_transport_release" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x90aa8549, "vsock_find_cid" },
	{ 0xe41fcdab, "vhost_vring_ioctl" },
	{ 0xb7c9edc2, "vsock_for_each_connected_socket" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9fa67180, "vhost_dev_flush" },
	{ 0xa0049b34, "virtio_transport_connect" },
	{ 0xd8827af6, "virtio_transport_stream_has_data" },
	{ 0x74ad9020, "vhost_vq_access_ok" },
	{ 0xcf0e30e0, "vhost_dev_stop" },
	{ 0x7e3f1e25, "vhost_dev_init" },
	{ 0x4c5a204b, "virtio_transport_stream_rcvhiwat" },
	{ 0x37a0cba, "kfree" },
	{ 0xa832ce1, "iov_iter_init" },
	{ 0x588983ae, "virtio_transport_dgram_bind" },
	{ 0x29b786a7, "virtio_transport_free_pkt" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0x1eafa82c, "virtio_transport_notify_recv_pre_block" },
	{ 0x2c16151c, "vhost_vq_init_access" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x991dd935, "virtio_transport_dgram_enqueue" },
	{ 0xffdf1c99, "virtio_transport_shutdown" },
	{ 0x94a02de2, "vhost_exceeds_weight" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x27938477, "virtio_transport_notify_send_post_enqueue" },
	{ 0xd105accb, "virtio_transport_dgram_dequeue" },
	{ 0x9bd74721, "vhost_poll_queue" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdd7fa124, "virtio_transport_notify_send_init" },
	{ 0xabf66dd4, "vhost_work_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaa994492, "vhost_chr_write_iter" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x1a3c52b8, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x10fbd3d1, "virtio_transport_seqpacket_dequeue" },
	{ 0x841206e5, "vhost_get_vq_desc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9d810a4d, "virtio_transport_seqpacket_enqueue" },
	{ 0x67e473, "virtio_transport_seqpacket_has_data" },
	{ 0x692832de, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xe7671e67, "virtio_transport_stream_enqueue" },
	{ 0x7cef87f9, "vhost_chr_read_iter" },
	{ 0xec84b125, "virtio_transport_stream_dequeue" },
	{ 0x58ab480b, "vsock_core_unregister" },
	{ 0x291297bc, "vsock_core_register" },
	{ 0x8954e50b, "vhost_dev_ioctl" },
	{ 0xf36c576f, "vhost_signal" },
	{ 0x96601bbe, "misc_register" },
	{ 0x391b299a, "vhost_disable_notify" },
	{ 0x82fcdd00, "virtio_transport_notify_poll_out" },
	{ 0xcbcfd215, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x9d632447, "vhost_set_backend_features" },
	{ 0xc583d531, "vhost_enable_notify" },
	{ 0x9973f90a, "virtio_transport_deliver_tap_pkt" },
	{ 0xe457155b, "vhost_log_access_ok" },
	{ 0xdb70ec42, "vhost_dev_cleanup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x321890ba, "virtio_transport_stream_is_active" },
	{ 0xf2386bef, "virtio_transport_do_socket_init" },
	{ 0xbc10f5ec, "vhost_chr_poll" },
	{ 0x689ab4bc, "virtio_transport_notify_poll_in" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x74841b0f, "virtio_transport_stream_has_space" },
	{ 0xabea3271, "virtio_transport_notify_send_pre_block" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbd9351d5, "vq_meta_prefetch" },
	{ 0xadfa2640, "vhost_dev_check_owner" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc92ec731, "virtio_transport_notify_buffer_size" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x72f4f0be, "virtio_transport_destruct" },
	{ 0xea374882, "virtio_transport_recv_pkt" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vhost,vmw_vsock_virtio_transport_common,vsock");


MODULE_INFO(srcversion, "CAF64B4D20C702ECA55D91A");
