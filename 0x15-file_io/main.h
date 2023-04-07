#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

/* All the function prototype*/
void check_args(int argc);
void check_read(ssize_t check, char *file, int fd_from, int fd_to);
void check_write(ssize_t check, char *file, int fd_from, int fd_to);
void check_close(int check, int fd);
void copy_file(const char *src_file_path, const char *target_file_path);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif /* MAIN_H */
