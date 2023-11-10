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
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9b0b821a, "em28xx_write_reg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb2a0e7e, "i2c_probe_func_quick_read" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x2345d009, "input_free_device" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xda149aa4, "em28xx_write_reg_bits" },
	{ 0x27af3192, "rc_register_device" },
	{ 0x4f975cb8, "em28xx_unregister_extension" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0x34056714, "em28xx_toggle_reg_bits" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x49419cd2, "em28xx_find_led" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x441916ec, "input_event" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x164d65e0, "em28xx_register_extension" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe31e4f01, "em28xx_write_regs" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x129ee000, "em28xx_read_reg" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "C5682C39C4A6B507DCCC206");
