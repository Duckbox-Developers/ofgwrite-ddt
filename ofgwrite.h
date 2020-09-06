#include <sys/stat.h>

extern struct stat kernel_file_stat;
extern struct stat rootfs_file_stat;

extern int multiboot_partition;
extern char current_rootfs_device[1000];
extern char vumodel[63];

enum RootfsTypeEnum
{
	UNKNOWN, UBIFS, JFFS2, EXT4
};
