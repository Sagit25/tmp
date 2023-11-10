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

SYMBOL_CRC(af_alg_register_type, 0xb40e5594, "_gpl");
SYMBOL_CRC(af_alg_unregister_type, 0xe30fe825, "_gpl");
SYMBOL_CRC(af_alg_release, 0x13b0fcfa, "_gpl");
SYMBOL_CRC(af_alg_release_parent, 0x82a47958, "_gpl");
SYMBOL_CRC(af_alg_accept, 0x16a3047f, "_gpl");
SYMBOL_CRC(af_alg_make_sg, 0x15f9297c, "_gpl");
SYMBOL_CRC(af_alg_free_sg, 0x9e0da0d5, "_gpl");
SYMBOL_CRC(af_alg_count_tsgl, 0x6ab15998, "_gpl");
SYMBOL_CRC(af_alg_pull_tsgl, 0xabef6998, "_gpl");
SYMBOL_CRC(af_alg_wmem_wakeup, 0xd978eac6, "_gpl");
SYMBOL_CRC(af_alg_wait_for_data, 0xd453d317, "_gpl");
SYMBOL_CRC(af_alg_sendmsg, 0x3a702d66, "_gpl");
SYMBOL_CRC(af_alg_sendpage, 0x8f8be68e, "_gpl");
SYMBOL_CRC(af_alg_free_resources, 0x432aa90e, "_gpl");
SYMBOL_CRC(af_alg_async_cb, 0x2691f097, "_gpl");
SYMBOL_CRC(af_alg_poll, 0xd2f70127, "_gpl");
SYMBOL_CRC(af_alg_alloc_areq, 0xda0324d5, "_gpl");
SYMBOL_CRC(af_alg_get_rsgl, 0x7088d879, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x57bc19d2, "down_write" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xce807a25, "up_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x1e44e99c, "sock_kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xee12e59a, "proto_register" },
	{ 0x6a5932c1, "sock_register" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x1425e33, "try_module_get" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xcc793c4a, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaee3ac91, "sock_kzfree_s" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xfde582cc, "iov_iter_get_pages2" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x953fa338, "sock_kfree_s" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xe0da8582, "sock_wake_async" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0xf0886af7, "sock_no_sendmsg" },
	{ 0x14766d50, "sock_no_recvmsg" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FFF899EB47941B1C4A231A2");
