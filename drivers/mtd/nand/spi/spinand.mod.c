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
	{ 0x86ed10fe, "spi_mem_driver_register_with_owner" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb0ba8761, "spi_mem_dirmap_read" },
	{ 0x5e7ee187, "mtd_device_unregister" },
	{ 0xb9047b29, "spi_mem_exec_op" },
	{ 0x5da44866, "nanddev_cleanup" },
	{ 0x8a65ab35, "spi_mem_poll_status" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6209694, "nanddev_init" },
	{ 0xd0f4e574, "mtd_device_parse_register" },
	{ 0xbf83c9dc, "nand_ecc_prepare_io_req" },
	{ 0x3512b5f8, "nanddev_ecc_engine_cleanup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x189896b4, "nanddev_mtd_erase" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc5d31539, "spi_mem_dirmap_write" },
	{ 0xa60184d6, "spi_mem_driver_unregister" },
	{ 0x8f0d620e, "mtd_ooblayout_count_freebytes" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c948548, "nanddev_markbad" },
	{ 0x38d1e4a2, "nanddev_ecc_engine_init" },
	{ 0x29dd5c36, "mtd_ooblayout_set_databytes" },
	{ 0xaa833bd4, "nanddev_isbad" },
	{ 0x701df8b, "devm_spi_mem_dirmap_create" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x110efa21, "nanddev_isreserved" },
	{ 0xf0f99548, "spi_mem_adjust_op_size" },
	{ 0xd5a34073, "spi_mem_supports_op" },
	{ 0xb658c81f, "mtd_ooblayout_get_databytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc82f5c1f, "nand_ecc_finish_io_req" },
	{ 0x32c11a70, "nanddev_mtd_max_bad_blocks" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mtd,nandcore");

MODULE_ALIAS("spi:spi-nand");
MODULE_ALIAS("of:N*T*Cspi-nand");
MODULE_ALIAS("of:N*T*Cspi-nandC*");

MODULE_INFO(srcversion, "4F72E599095FC8E71D6AB69");
