#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdint.h>
#include <elf.h>

/* #definehgfhdfghfhfgdhdfh EI_NIDENT 16*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

 #if __LP64__
typedef Elf64_Ehdr Elf_Ehdr;
#else
typedef Elf32_Ehdr Elf_Ehdr;
#endif

#endif
