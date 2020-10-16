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
	{ 0x7ec589d5, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xcc0662d9, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xd2e65f7a, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x4ada760b, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x51204841, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xda113ac9, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe44a4bf2, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x13bec41d, __VMLINUX_SYMBOL_STR(release_bus_freq) },
	{ 0xd41ab69c, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0x3f59d6dd, __VMLINUX_SYMBOL_STR(request_bus_freq) },
	{ 0xbc1a4f7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x66717cc5, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xbd0c5dbc, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x8c1ff457, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6efe4e19, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3fc6d5c9, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xe42b3c21, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x632a46d, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0x1b09c0f2, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0xf667eb61, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port_parent) },
	{ 0xc25d3a60, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x5a205374, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x379c00e3, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xe8ba87cc, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2770f6b8, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x84702762, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x649181e2, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x823f5613, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3b41090, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xae372752, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x6452bb93, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2c5769e, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x850fa94d, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x42ed5ca, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x93e3940, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf935feb2, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xafde490b, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x1a9ebf5, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x78360cf6, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xd007beca, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2aebc76, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xc97fa0e9, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0xfc75c7df, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x931322bd, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x614b169f, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0xf0dd1fe7, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0xf689c30e, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xff52f6f5, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xb7a245bf, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x348640bb, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x765e25d8, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xbe1adc57, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6s-csi*");

MODULE_INFO(srcversion, "9B2303B75E4E8CD35806E2B");
