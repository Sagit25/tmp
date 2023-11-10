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
	{ 0xff647d3a, "register_atm_ioctl" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x121445a5, "skb_pull" },
	{ 0x257ccc06, "ppp_input" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x53d54f3c, "ppp_input_error" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xd94ec690, "ppp_unregister_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc793c4a, "module_put" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xfa1ac65f, "ppp_output_wakeup" },
	{ 0x3fb23ea1, "deregister_atm_ioctl" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x972a3723, "consume_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb5c3dcfb, "ppp_channel_index" },
	{ 0xba54ad60, "ppp_unit_number" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9fa1ab42, "ppp_register_channel" },
	{ 0x9303f7be, "__module_get" },
	{ 0x5b38bb31, "vcc_process_recv_queue" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "624DB693C091F1C66D94F7A");
