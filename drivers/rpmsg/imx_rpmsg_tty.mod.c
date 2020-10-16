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
	{ 0x18b41dfa, __VMLINUX_SYMBOL_STR(unregister_rpmsg_driver) },
	{ 0xbcd347c0, __VMLINUX_SYMBOL_STR(register_rpmsg_driver) },
	{ 0x8635699b, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xffa54252, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x640914f2, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xf6a2358f, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe331d5f, __VMLINUX_SYMBOL_STR(rpmsg_send_offchannel_raw) },
	{ 0xc344deb, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x5ccdf1ef, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x919b74aa, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xc0629f89, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0xd1f260ce, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xa6a880c5, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x505014a9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xae0cb1fb, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf10e33a, __VMLINUX_SYMBOL_STR(tty_prepare_flip_string) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "07B1503D766ACA66F0F4100");
