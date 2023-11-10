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
	{ 0x1ca3e33, "w1_register_family" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9de11b05, "w1_reset_select_slave" },
	{ 0x8fc10b6d, "w1_write_8" },
	{ 0x66ad212e, "w1_read_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x32bd488, "w1_write_block" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8b5626a3, "power_supply_unregister" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x81138b63, "w1_unregister_family" },
	{ 0xb85b636f, "power_supply_changed" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd92187d7, "power_supply_am_i_supplied" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfcbcca79, "_dev_notice" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xaf8e19e, "power_supply_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "10D41588D583C35DD8B738E");
