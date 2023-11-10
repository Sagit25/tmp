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
	{ 0x7d3f98c7, "unregister_console" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc1ad0137, "netpoll_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd1812dc2, "netpoll_send_udp" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dacf22f, "netpoll_parse_options" },
	{ 0x6236e768, "netpoll_setup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x42a0e2dc, "register_console" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xad361fa5, "__netpoll_cleanup" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD688351DBA788A4BDB8226");
