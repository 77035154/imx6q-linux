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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3f094f33, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0x484fbf21, __VMLINUX_SYMBOL_STR(ipu_check_task) },
	{ 0xc755e3aa, __VMLINUX_SYMBOL_STR(ipu_queue_task) },
	{ 0xd007beca, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5c2bf5b0, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x5b0033d9, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa7201185, __VMLINUX_SYMBOL_STR(ipu_disp_set_window_pos) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x388c0ae9, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb101370, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0x374524b0, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5eadb614, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_csi) },
	{ 0x4d0d068a, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0xd7ec857d, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0x9a53dcf, __VMLINUX_SYMBOL_STR(ipu_update_channel_buffer) },
	{ 0xe1aca359, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xfe03b156, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_ipu) },
	{ 0x8714775f, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0x3e3bc5df, __VMLINUX_SYMBOL_STR(registered_fb) },
	{ 0x331b197, __VMLINUX_SYMBOL_STR(fb_set_var) },
	{ 0x22bf814, __VMLINUX_SYMBOL_STR(ipu_csi_get_sensor_protocol) },
	{ 0x7683362c, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0xd3506ae4, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe610d771, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x41f644ca, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0x98fc7e35, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xe1ba9555, __VMLINUX_SYMBOL_STR(mipi_csi2_get_virtual_channel) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7522714a, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0x6c61ce70, __VMLINUX_SYMBOL_STR(num_registered_fb) },
	{ 0xee326255, __VMLINUX_SYMBOL_STR(fb_blank) },
	{ 0xadd47255, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A9B7CCDBD0DDD1FA4FECF8F");
