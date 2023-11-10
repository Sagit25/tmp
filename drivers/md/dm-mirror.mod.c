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
	{ 0x5f4a6e61, "dm_rh_dec" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xfebf6714, "dm_dirty_log_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x879c6639, "dm_rh_delay" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x42158909, "dm_noflush_suspending" },
	{ 0xe692e914, "dm_per_bio_data" },
	{ 0x10d24857, "dm_put_device" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x96848186, "scnprintf" },
	{ 0xead959f2, "dm_dirty_log_destroy" },
	{ 0x2d8bb326, "dm_rh_mark_nosync" },
	{ 0x37a0cba, "kfree" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x38972f23, "dm_rh_region_to_sector" },
	{ 0xd2370f, "dm_rh_dirty_log" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa745159a, "dm_set_target_max_io_len" },
	{ 0x55c5df12, "dm_table_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf023d9a1, "dm_rh_bio_to_region" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0xbf9a3de8, "dm_kcopyd_copy" },
	{ 0x5ee8544a, "dm_register_target" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa8f971b4, "dm_region_hash_create" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x7d5e1815, "dm_rh_get_region_key" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3f298b16, "dm_rh_inc_pending" },
	{ 0x8745a12e, "dm_io" },
	{ 0xfec20905, "dm_get_device" },
	{ 0x57e16c3e, "dm_rh_get_state" },
	{ 0xf92b8a3d, "dm_rh_get_region_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-region-hash,dm-log,dm-mod");


MODULE_INFO(srcversion, "AEF4CA2B8845CDAD59D25DE");
