#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfa985410, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x787e96c1, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x49a2d17e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x210858fe, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x632780, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x999c0fbc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe6f01d36, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x40c6f879, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x3f22414d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7d598cf9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe2daacde, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xe2f9e010, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0xd99213ea, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x70f5ba39, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x99ed754e, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8cfe2aa5, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x7271a4b5, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3ad7015d, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x9374ba5a, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xdaa2e9e8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc62d12fe, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x9d8a301c, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd959b5f7, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xff3c4fca, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6f8c5d11, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5e564a94, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x39934238, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x785c20ee, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x278c2caf, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfc59e0d0, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x6f983e91, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf0b97cf0, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1468aa23, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6144fe8b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x60c71b8d, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x5082e186, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x2c1d880b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x906519f, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x9fae98f9, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x5550f2d9, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe7482400, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xa1635a27, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcfddf9d7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x68f6a542, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x940a7e59, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7f08c3cc, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xaf24a117, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xceaa9c7f, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf61dc5bf, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x91fd980d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x89107cbc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xdab11628, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x754b794e, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "EEBA2E436A39010FE684EFD");
