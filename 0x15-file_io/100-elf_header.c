#include "main.h"

/**
  *error_handling- function to handle if a file isnt an ELF file and thus
  *        display a comprehensive error message to stderr
  *@error_message: the message to be displayed if a file isnt an ELF file
  *
  */

void error_handling(const char *error_message)
{
	fprintf(stderr, "There is an error: %s\n", error_message);
	exit(98);

}

/**
  *elf_header_print_handling-function to handle printing of the ELf header file
  *@elf_header: the header of an ELF file
  *
  */


void elf_header_print_handling(const Elf64_Ehdr *elf_header)
{
	int a;
	/* magic: used by file command to determine type of file based */
	/* on its contents*/
	printf("Magic:");
	/* EI_indent: constant that specifies size of ELF ID field*/
	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x", elf_header->e_indent[a]);
	}
	printf("\nClass: %s\n", elf_header->e_indent[4] == 1 ? "ELF32" :
			elf_header->e_indent[4] == 2 ? "ELF64" :
			"This is an Invalid ELF class");
	printf("Data: %s\n",
			elf_header->e_indent[5] == 1 ? "2's complement, little Endian" :
			elf_header->e_indent[5] == 2 ? "2's comple    ment, big Endian" :
			"Invalid data encoding present");
	printf("Version: %d\n", elf_header->e_indent[6]);
	printf("OS/ABI: %d\n", elf_header->e_indent[7]);
	printf("ABI Version: %d\n", elf_header->e_indent[8]);
	printf("Type: %d\n", elf_header->e_type);
	printf("Entry point address: %lx\n", elf_header->e_entry);
	printf("Format: ELF64\n");
}

/**
  *main- function that displays the information contained in the ELF header
  *          at the start of an ELF file.
  *@argc: the number of command line arguments
  *@argv: the array containing the program command line arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	const char *file_name = argv[1];
	int file_descript;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		error_handling("Wrong number of arguments(1): elf_header elf_filename");

	}
	/* just reading/displaying  the ELF file nothing else*/
	file_descript = open(file_name, O_RDONLY);

	if (file_descript == -1)/* -1 for error opening*/
	{
		error_handling("Opening of file failed");

	}

	/* if entire header was not read*/
	if (read(file_descript, &elf_header,
				sizeof(elf_header)) != sizeof(elf_header))
	{
		error_handling("Failure to read ELF header");

	}
	if (elf_header.e_indent[0] != 0x7f || elf_header.e_indent[1] != 'E'
			|| elf_header.e_indent[2] != 'L'
			|| elf_header.e_indent[3] != 'F')
	{
		error_handling("This file is not an ELF file");
	}
	elf_header_print_handling(&elf_header);
	close(file_descript);

	return (0);


}
