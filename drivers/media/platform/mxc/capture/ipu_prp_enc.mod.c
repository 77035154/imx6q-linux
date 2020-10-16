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
	{ 0x3f094f33, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd007beca, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa539f87f, __VMLINUX_SYMBOL_STR(ipu_unlink_channels) },
	{ 0x5c2bf5b0, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x8a3cb96f, __VMLINUX_SYMBOL_STR(ipu_clear_buffer_ready) },
	{ 0x5b0033d9, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0x388c0ae9, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe8e64fbc, __VMLINUX_SYMBOL_STR(bytes_per_pixel) },
	{ 0xdb101370, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0x374524b0, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5eadb614, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_csi) },
	{ 0x4d0d068a, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0x9a53dcf, __VMLINUX_SYMBOL_STR(ipu_update_channel_buffer) },
	{ 0xe1aca359, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xfe03b156, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_ipu) },
	{ 0x8714775f, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0x7683362c, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0x501b1a9c, __VMLINUX_SYMBOL_STR(ipu_csi_get_window_size) },
	{ 0xd3506ae4, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0xe610d771, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x41f644ca, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0x98fc7e35, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xe1ba9555, __VMLINUX_SYMBOL_STR(mipi_csi2_get_virtual_channel) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7d6c8b79, __VMLINUX_SYMBOL_STR(ipu_link_channels) },
	{ 0x7522714a, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0xadd47255, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3B23D61701DB4DBAB80679D");
