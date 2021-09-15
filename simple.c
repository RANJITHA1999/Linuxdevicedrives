#include <linux/module.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("ranju");
MODULE_DESCRIPTION("simple");


static int  __init hello_world_init(void)
{
            printk(KERN_INFO "hello world started\n");
            return 0;
 }
static void  __exit hello_world_exit(void)
{
	 printk(KERN_INFO "hello world exit \n");
}
module_init(hello_world_init);
module_exit(hello_world_exit);

