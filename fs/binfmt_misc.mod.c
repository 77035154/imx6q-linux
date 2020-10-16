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
	{ 0xeeac7923, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x5959cc06, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x8dfef006, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x5829599c, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xcf7b47e2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x24ad3635, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xf661bba8, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0xf17daf96, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x693eb166, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc3fb602a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x14237441, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x8add9631, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xa6a1534a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x37d2de2a, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x6566065c, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xaaf9fe5, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x4f6e005b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x9b4af316, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbc8ffbf, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xbeb5d6e4, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x722d78da, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x1d72f33f, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x70ddd53b, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xf7aacbbb, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x29e87b38, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0x4fbd4e11, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8acf7db3, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x16444bd, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x565ed58b, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x5caf949a, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x7442c32, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D2B5D202BA235ED4DE4D79C");
