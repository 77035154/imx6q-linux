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
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1e43714, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xa097548, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xa72a5d1, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x6da33abd, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x578c842, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7d598cf9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9b8ec486, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xd3b2fafa, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x7406cc0f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe3d26872, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x2ebfb080, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0x6d358f77, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xb3e09e9a, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4ed6d71e, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xaf24a117, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xce30991a, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xd262618f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x88d53d7, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x8f1d669d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x9c2b332f, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x18a6774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2a62b8b4, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x1468aa23, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xe8df35df, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x7862f6cc, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4668eb86, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x18c4f9c2, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x49b4f737, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd9f674dd, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8ac51720, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7271a4b5, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe2daacde, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "AE115E9A4F24132DE51C6CC");
