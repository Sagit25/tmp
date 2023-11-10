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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(phylink_caps_to_linkmodes, 0x66e8b5b0, "_gpl");
SYMBOL_CRC(phylink_connect_phy, 0x3e200ce2, "_gpl");
SYMBOL_CRC(phylink_create, 0x3aa2143d, "_gpl");
SYMBOL_CRC(phylink_decode_usxgmii_word, 0x3b0b75e7, "_gpl");
SYMBOL_CRC(phylink_destroy, 0xf3083a1d, "_gpl");
SYMBOL_CRC(phylink_disconnect_phy, 0x983276da, "_gpl");
SYMBOL_CRC(phylink_ethtool_get_eee, 0x2c8e28ee, "_gpl");
SYMBOL_CRC(phylink_ethtool_get_pauseparam, 0xf8fe5642, "_gpl");
SYMBOL_CRC(phylink_ethtool_get_wol, 0x08213956, "_gpl");
SYMBOL_CRC(phylink_ethtool_ksettings_get, 0xc430fe5f, "_gpl");
SYMBOL_CRC(phylink_ethtool_ksettings_set, 0x6ee0efb4, "_gpl");
SYMBOL_CRC(phylink_ethtool_nway_reset, 0x6fa426d2, "_gpl");
SYMBOL_CRC(phylink_ethtool_set_eee, 0x57727285, "_gpl");
SYMBOL_CRC(phylink_ethtool_set_pauseparam, 0x15c4e3e2, "_gpl");
SYMBOL_CRC(phylink_ethtool_set_wol, 0x62104126, "_gpl");
SYMBOL_CRC(phylink_expects_phy, 0x4278d56a, "_gpl");
SYMBOL_CRC(phylink_fwnode_phy_connect, 0xad41b5e2, "_gpl");
SYMBOL_CRC(phylink_generic_validate, 0x421ae58b, "_gpl");
SYMBOL_CRC(phylink_get_capabilities, 0xd903f419, "_gpl");
SYMBOL_CRC(phylink_get_eee_err, 0x825c7340, "_gpl");
SYMBOL_CRC(phylink_init_eee, 0xec02ebe0, "_gpl");
SYMBOL_CRC(phylink_mac_change, 0x12135396, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_an_restart, 0xd5acd6ed, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_config, 0x0489e38f, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_decode_state, 0x153a08b1, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_encode_advertisement, 0x5dc19747, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_get_state, 0x7feaed83, "_gpl");
SYMBOL_CRC(phylink_mii_c45_pcs_get_state, 0xbda28372, "_gpl");
SYMBOL_CRC(phylink_mii_ioctl, 0xde66f4a7, "_gpl");
SYMBOL_CRC(phylink_of_phy_connect, 0xe4a4f7f1, "_gpl");
SYMBOL_CRC(phylink_resume, 0xc0a8f4be, "_gpl");
SYMBOL_CRC(phylink_set_port_modes, 0xc1d15a4c, "_gpl");
SYMBOL_CRC(phylink_speed_down, 0x59e0695d, "_gpl");
SYMBOL_CRC(phylink_speed_up, 0x5d0c4dcc, "_gpl");
SYMBOL_CRC(phylink_start, 0x911fcd6c, "_gpl");
SYMBOL_CRC(phylink_stop, 0xdcb0a2c0, "_gpl");
SYMBOL_CRC(phylink_suspend, 0x16ca1a8a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xee3f47ea, "gpiod_get_value_cansleep" },
	{ 0xd59a1587, "linkmode_resolve_pause" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb04e2793, "netif_carrier_off" },
	{ 0xb9f3544f, "_dev_printk" },
	{ 0x67ff24bb, "netdev_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x792c94e9, "gpiod_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x92b57248, "flush_work" },
	{ 0x36c35973, "phy_disconnect" },
	{ 0xfcaddaac, "phy_ethtool_get_wol" },
	{ 0xa9bb2bdc, "phy_ethtool_set_wol" },
	{ 0x200ad923, "phy_get_eee_err" },
	{ 0x945de51a, "phy_init_eee" },
	{ 0xc658dc8c, "phy_ethtool_get_eee" },
	{ 0x895b1665, "phy_ethtool_set_eee" },
	{ 0x48190fba, "mdiobus_read" },
	{ 0xa60af9e4, "mdiobus_write" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x657f6750, "phy_mii_ioctl" },
	{ 0xec20af2e, "phy_speed_down" },
	{ 0x2114216d, "phy_speed_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd06afb72, "phy_restart_aneg" },
	{ 0xf4689d50, "linkmode_set_pause" },
	{ 0x12c4c578, "phy_set_asym_pause" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9f06d4df, "phy_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2999c83, "phy_get_pause" },
	{ 0xf466e483, "mdiobus_modify" },
	{ 0xd397ebfc, "mdiobus_modify_changed" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7d9de24c, "phy_start" },
	{ 0x8c769c97, "gpiod_to_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x639a6001, "netif_carrier_on" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x67af26e2, "kmalloc_caches" },
	{ 0x59a85471, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5acb50cc, "fwnode_get_named_child_node" },
	{ 0x6630617f, "fwnode_handle_put" },
	{ 0x27d1cda7, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe54b9ecb, "fwnode_property_read_u32_array" },
	{ 0xf068ed54, "fwnode_property_present" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0x4bc38c24, "fwnode_gpiod_get_index" },
	{ 0x91ba8b01, "_dev_err" },
	{ 0x417c2aa7, "phy_support_asym_pause" },
	{ 0x5f754e5a, "memset" },
	{ 0xc0f464a5, "phy_get_rate_matching" },
	{ 0x79e497a1, "phy_attached_info_irq" },
	{ 0x27351aae, "phy_request_interrupt" },
	{ 0xaf2246ff, "phy_attach_direct" },
	{ 0xdc6284f0, "phy_detach" },
	{ 0xc43171cf, "fwnode_get_phy_node" },
	{ 0x60210420, "fwnode_phy_find_device" },
	{ 0x8239e3a0, "phy_device_free" },
	{ 0x8968a9a4, "phy_ethtool_ksettings_set" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x743a4726, "phy_ethtool_ksettings_get" },
	{ 0xb899592f, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F869711610399E6D5978D08");
