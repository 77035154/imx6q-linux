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
	{ 0xddfc4d15, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x9b4af316, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xee4b7762, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xe5ae8cdb, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x1c1d47b1, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x266f6d22, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc5257f88, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x8d22814d, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xdab17934, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x77f04e1b, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x6a90ce39, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0x8c5c4de1, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x61bc7c24, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0xfe1ae35, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x939a353, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x230c955d, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe326e9d6, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0xb0a34c3f, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x9593a466, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x25494130, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0xf17daf96, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe53c229f, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x77b18c0a, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xbbb8e2, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x165d6d1e, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x808ac463, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xcf7b47e2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd42f9d21, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x59c098fb, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0xc3fb602a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xabba23fd, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "31B1E1BF3B95D7E923DE732");
