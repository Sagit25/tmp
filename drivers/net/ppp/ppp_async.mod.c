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
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x92997ed8, "_printk" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x257ccc06, "ppp_input" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x53d54f3c, "ppp_input_error" },
	{ 0xfa1ac65f, "ppp_output_wakeup" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x9fa1ab42, "ppp_register_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xe5525cbb, "tty_unthrottle" },
	{ 0x48471741, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xa6257a2f, "complete" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xaa90317e, "start_tty" },
	{ 0x4b1fa124, "stop_tty" },
	{ 0x121445a5, "skb_pull" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xd94ec690, "ppp_unregister_channel" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xba54ad60, "ppp_unit_number" },
	{ 0xb5c3dcfb, "ppp_channel_index" },
	{ 0xb41b8837, "n_tty_ioctl_helper" },
	{ 0x3c1bbb93, "tty_mode_ioctl" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "crc-ccitt,ppp_generic");


MODULE_INFO(srcversion, "386C48B56E2BB578649BCBF");
