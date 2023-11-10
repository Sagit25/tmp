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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(cx2341x_mpeg_ctrls, 0x55aa7c5f, "");
SYMBOL_CRC(cx2341x_ctrl_query, 0x15ac1bd0, "");
SYMBOL_CRC(cx2341x_ctrl_get_menu, 0x28240e61, "");
SYMBOL_CRC(cx2341x_ext_ctrls, 0x7673b684, "");
SYMBOL_CRC(cx2341x_fill_defaults, 0x7b4dd2cb, "");
SYMBOL_CRC(cx2341x_update, 0xdbc5583a, "");
SYMBOL_CRC(cx2341x_log_status, 0xe1fe1432, "");
SYMBOL_CRC(cx2341x_handler_init, 0x7d1fb0a1, "");
SYMBOL_CRC(cx2341x_handler_set_50hz, 0x449c9f1b, "");
SYMBOL_CRC(cx2341x_handler_setup, 0xdd2b4618, "");
SYMBOL_CRC(cx2341x_handler_set_busy, 0xe364b0e7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x57529704, "v4l2_ctrl_activate" },
	{ 0x15c074e1, "v4l2_ctrl_g_ctrl" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0xdcb764ad, "memset" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "9B7366CAD416EC72424DA74");
