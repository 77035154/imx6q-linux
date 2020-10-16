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
	{ 0x57429e24, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xa1932c0c, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x12143024, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x459704f4, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbf199dd2, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xc9870e84, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x68f6a542, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2c1d880b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfc59e0d0, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x578c842, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x3a40ec03, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0x18a6774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2b3c25de, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x7406cc0f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6f983e91, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x91fd980d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd262618f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7271a4b5, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x7d598cf9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe8df35df, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "07A97BE75F2F8E124A49096");
