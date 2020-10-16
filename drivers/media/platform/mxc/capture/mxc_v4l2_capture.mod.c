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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x51204841, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xda113ac9, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3e3bc5df, __VMLINUX_SYMBOL_STR(registered_fb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x631cb49f, __VMLINUX_SYMBOL_STR(csi_enc_deselect) },
	{ 0xc77a97a, __VMLINUX_SYMBOL_STR(prp_enc_deselect) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x348640bb, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x765e25d8, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x6bb94205, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x6c88ec80, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x649181e2, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x63074a63, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x84702762, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf0d86b17, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3b41090, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x823f5613, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x3f094f33, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xae372752, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x313a8cf4, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x761b20eb, __VMLINUX_SYMBOL_STR(prp_still_deselect) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xca55481b, __VMLINUX_SYMBOL_STR(prp_still_select) },
	{ 0xd007beca, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xeeb583c2, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0x6ce9c427, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xafd9dc5e, __VMLINUX_SYMBOL_STR(prp_enc_select) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7e14dc74, __VMLINUX_SYMBOL_STR(csi_enc_select) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xff52f6f5, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xb378d33d, __VMLINUX_SYMBOL_STR(ipu_csi_init_interface) },
	{ 0xe9fae2db, __VMLINUX_SYMBOL_STR(ipu_csi_set_window_pos) },
	{ 0x7245b2a0, __VMLINUX_SYMBOL_STR(ipu_csi_set_window_size) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc26e75dc, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_0) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0aa37df, __VMLINUX_SYMBOL_STR(bg_overlay_sdc_deselect) },
	{ 0xb9729003, __VMLINUX_SYMBOL_STR(foreground_sdc_deselect) },
	{ 0xa96d0137, __VMLINUX_SYMBOL_STR(ipu_csi_enable_mclk) },
	{ 0xc48906b9, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_1) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xd2a84747, __VMLINUX_SYMBOL_STR(bg_overlay_sdc_select) },
	{ 0x39d0857c, __VMLINUX_SYMBOL_STR(foreground_sdc_select) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipu_csi_enc,ipu_prp_enc,v4l2-int-device,ipu_still,ipu_bg_overlay_sdc,ipu_fg_overlay_sdc";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-capture*");
MODULE_ALIAS("platform:v4l2-capture-imx5");
MODULE_ALIAS("platform:v4l2-capture-imx6");

MODULE_INFO(srcversion, "9791CC45F4C1DB3BF1B8EE5");
