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
	{ 0x37e3753e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x14237441, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x32d5ee8a, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xfb7851ba, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfa22686f, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x6566065c, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x5b4c1815, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xaaf9fe5, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x266f6d22, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x722d78da, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x13984c78, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xea6f41a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x71a44bc8, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaf5c4284, __VMLINUX_SYMBOL_STR(sysfs_remove_mount_point) },
	{ 0xb2146371, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xeeac7923, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x15f87868, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x38137747, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x28c7171e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x82c707c7, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0x69c53bc2, __VMLINUX_SYMBOL_STR(nd_set_link) },
	{ 0xed14dd9f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa9aa7b52, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x640a5c2b, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x4f6e005b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x75a96baf, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x764e3a6d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf17daf96, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xf5af94f7, __VMLINUX_SYMBOL_STR(sysfs_create_mount_point) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x64d16718, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x693eb166, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x941ef645, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x1debfac6, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x306e666c, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x7d1f4fe5, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x5829599c, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x99b1c44a, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xcf7b47e2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa6a1534a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xc3fb602a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x3092e4f1, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x44d5b05f, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0xc9b09232, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BAC846119DF7A8FAD803348");
