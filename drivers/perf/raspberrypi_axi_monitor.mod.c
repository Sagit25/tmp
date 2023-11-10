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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xce23f8ca, "devm_ioremap_resource" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x783ba324, "of_property_read_u32_index" },
	{ 0x394f4efd, "simple_open" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperfC*");

MODULE_INFO(srcversion, "B7A9012E527D6DC2E9FB7D7");
