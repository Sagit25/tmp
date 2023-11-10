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
	{ 0x65cad864, "debugfs_remove" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0x8296d3ad, "irq_create_mapping_affinity" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xadcc60b6, "gpiochip_get_desc" },
	{ 0x69be3936, "__irq_resolve_mapping" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb3c6f341, "single_open" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28310bcd, "kasprintf_strarray" },
	{ 0x957f029f, "fwnode_create_software_node" },
	{ 0x248e1473, "kfree_strarray" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0xb0454bf, "fwnode_remove_software_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xd3e67542, "device_property_read_u16_array" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc8056723, "devm_irq_domain_create_sim" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x613beb6, "single_release" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-mockup");
MODULE_ALIAS("of:N*T*Cgpio-mockupC*");

MODULE_INFO(srcversion, "D574FBFB445AC175152F40C");
