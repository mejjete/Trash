#pragma once
#include <fstart.h>

struct optional
{
    struct super_block gsuper;
    struct inode_t cdir;
    int fd;
    struct inode_t *inode_table[MAX_OPENED_FILE];
    char current_path[50];
}fsys;

int fs_create(const char *fsname);
bool module_init(const char *path);
bool module_exit();
int vcreat(const char *file_name);
int vread(int fd, void *buf, int count);
int vwrite(int fd, void *buf, int count);
int vseek(int fd, off_t offset, int whence);
int vtell(int fd);
int dev_tell(int fd);
int vopen(const char *file_name, int16_t mode);
int vremove(const char *file_name);
int change_dir(const char *dir_name);
int look_dir();
int ucat(const char *file_name);
int uwrite(const char *file_name, char *text);
