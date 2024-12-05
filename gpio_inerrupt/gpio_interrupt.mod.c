#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

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
	{ 0x3d4f438, "gpiod_set_raw_value" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2f8479f2, "device_destroy" },
	{ 0x9901e5e3, "class_destroy" },
	{ 0xd58dd2b1, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5c658724, "cdev_init" },
	{ 0xa2dc7695, "cdev_add" },
	{ 0x38e073, "class_create" },
	{ 0x23a131f9, "device_create" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xd765d499, "gpiod_direction_input" },
	{ 0xb833640a, "gpiod_set_debounce" },
	{ 0xb533b607, "gpiod_direction_output_raw" },
	{ 0x36252878, "gpiod_to_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9aad6b04, "gpio_to_desc" },
	{ 0xf079b8f9, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BD6CC399184D771B349473");
