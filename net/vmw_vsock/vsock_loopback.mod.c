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
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x291297bc, "vsock_core_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29b786a7, "virtio_transport_free_pkt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9973f90a, "virtio_transport_deliver_tap_pkt" },
	{ 0xea374882, "virtio_transport_recv_pkt" },
	{ 0x58ab480b, "vsock_core_unregister" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf2386bef, "virtio_transport_do_socket_init" },
	{ 0x72f4f0be, "virtio_transport_destruct" },
	{ 0x14a6dd35, "virtio_transport_release" },
	{ 0xa0049b34, "virtio_transport_connect" },
	{ 0x588983ae, "virtio_transport_dgram_bind" },
	{ 0xd105accb, "virtio_transport_dgram_dequeue" },
	{ 0x991dd935, "virtio_transport_dgram_enqueue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xec84b125, "virtio_transport_stream_dequeue" },
	{ 0xe7671e67, "virtio_transport_stream_enqueue" },
	{ 0xd8827af6, "virtio_transport_stream_has_data" },
	{ 0x74841b0f, "virtio_transport_stream_has_space" },
	{ 0x4c5a204b, "virtio_transport_stream_rcvhiwat" },
	{ 0x321890ba, "virtio_transport_stream_is_active" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x10fbd3d1, "virtio_transport_seqpacket_dequeue" },
	{ 0x9d810a4d, "virtio_transport_seqpacket_enqueue" },
	{ 0x67e473, "virtio_transport_seqpacket_has_data" },
	{ 0x689ab4bc, "virtio_transport_notify_poll_in" },
	{ 0x82fcdd00, "virtio_transport_notify_poll_out" },
	{ 0x154e4da3, "virtio_transport_notify_recv_init" },
	{ 0x1eafa82c, "virtio_transport_notify_recv_pre_block" },
	{ 0x692832de, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xcbcfd215, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xdd7fa124, "virtio_transport_notify_send_init" },
	{ 0xabea3271, "virtio_transport_notify_send_pre_block" },
	{ 0x1a3c52b8, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x27938477, "virtio_transport_notify_send_post_enqueue" },
	{ 0xc92ec731, "virtio_transport_notify_buffer_size" },
	{ 0xffdf1c99, "virtio_transport_shutdown" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vsock,vmw_vsock_virtio_transport_common");


MODULE_INFO(srcversion, "41A01488BD9B33EB91C6BC9");
