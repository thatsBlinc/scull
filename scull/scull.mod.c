#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0x4a165127, "kobject_put" },
	{ 0xe1d71654, "cdev_del" },
	{ 0xc83492ef, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc3a1cc09, "cdev_init" },
	{ 0x55dc419c, "param_ops_int" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0xe1185d9a, "no_llseek" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x15a66331, "kobject_set_name" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5aa7e49b, "tty_devnum" },
	{ 0xf95e0fb3, "pv_ops" },
	{ 0x3b5a2eee, "nonseekable_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x52673010, "current_task" },
	{ 0xc018434, "fasync_helper" },
	{ 0x6626afca, "down" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4c75eeab, "cdev_add" },
	{ 0x800473f, "__cond_resched" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8bd65ff4, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xcf2a6966, "up" },
	{ 0x86ff2a04, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "92F5E0770DAAA19F2EFA039");
