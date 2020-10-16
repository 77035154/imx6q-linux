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
	{ 0x6816d2e8, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xb7a245bf, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x43cd98b8, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xa993db5e, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0x348640bb, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbe1adc57, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0xf667eb61, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port_parent) },
	{ 0xc25d3a60, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x505014a9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5a205374, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x379c00e3, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xe8ba87cc, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x642df4b9, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4c0420c9, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe42b3c21, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x632a46d, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0x1b09c0f2, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x3b41090, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x2770f6b8, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xc79995e5, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x6452bb93, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x850fa94d, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2c5769e, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x42ed5ca, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x2bf517a2, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xc34c1061, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x18e87da3, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x476737b8, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0xae372752, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x93e3940, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbc1a4f7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x684d7da2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x5a30096d, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csi*");

MODULE_INFO(srcversion, "755625BA6EFA6A45AE5996C");
