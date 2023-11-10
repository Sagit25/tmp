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

SYMBOL_CRC(llc_sap_list, 0x52d7b2fd, "");
SYMBOL_CRC(llc_sap_find, 0x2873e816, "");
SYMBOL_CRC(llc_sap_open, 0x32851e43, "");
SYMBOL_CRC(llc_sap_close, 0xbc765767, "");
SYMBOL_CRC(llc_add_pack, 0x538b8d98, "");
SYMBOL_CRC(llc_remove_pack, 0x38b92846, "");
SYMBOL_CRC(llc_set_station_handler, 0x63988437, "");
SYMBOL_CRC(llc_mac_hdr_init, 0xda178589, "");
SYMBOL_CRC(llc_build_and_send_ui_pkt, 0x6dae9b25, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x972a3723, "consume_skb" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x121445a5, "skb_pull" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x38947782, "pskb_trim_rcsum_slow" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD8FA25028FBD9F020DD8FB");
