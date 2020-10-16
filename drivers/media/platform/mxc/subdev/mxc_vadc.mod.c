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
	{ 0x51204841, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xda113ac9, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x31818b72, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3454b3ee, __VMLINUX_SYMBOL_STR(of_iomap) },
	{ 0x1009378c, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x1c3e245, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0xae372752, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xbc1a4f7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x5a205374, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x642df4b9, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4c0420c9, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x6452bb93, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2c5769e, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x260e8758, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x93e3940, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xa993db5e, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0xb7a245bf, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x684d7da2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xe42b3c21, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6sx-vadc*");

MODULE_INFO(srcversion, "21CC8627C59F2FF1BCCEEC4");
