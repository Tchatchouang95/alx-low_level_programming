#include "main.h"
void accept_elf_file(Elf64_Ehdr *head);
void read_elf_head(int fd, Elf64_Ehdr *head);
void display_elf_head(Elf64_Ehdr *head);

/**
 * main - Program that displays information abt ELF header
 * @argc: Number of arguements passed to the terminal
 * @argv: array of arguements passed to ther termainal
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		perror("open");
		return (98);
	}
	Elf64_Ehdr head;

	read_elf_head(fd, &head);
	accept_elf_file(&head);
	display_elf_head(&head);

	close(fd);
	return (0);
}

/**
 * accept_elf_file - Validates ELF file
 * @head: pointer
 */
void accept_elf_file(Elf64_Ehdr *head)
{
	if (head->e_ident[EI_MAG0] != ELFMAG0 ||
		head->e_ident[EI_MAG1] != ELFMAG1 ||
		head->e_ident[EI_MAG2] != ELFMAG2 ||
		head->e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
}

/**
 * read_elf_head - Reads ELF header
 * @fd: file descriptor
 * @head: Pointer
 */
void read_elf_head(int fd, Elf64_Ehdr *head)
{
	if (read(fd, head, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("read");
		exit(98);
	}
}

/**
 * display_elf_head - Display ELF header
 * @head: Pointer
 */
void display_elf_head(Elf64_Ehdr *head)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", head->e_ident[i]);
	printf("\nClass:                             ");
	printf("%s\n", head->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              ");
	printf("%s\n", head->e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version:                           ");
	printf("%u\n", head->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	printf("%u\n", head->e_ident[EI_OSABI]);
	printf("ABI Version:                       ");
	printf("%u\n", head->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	printf("%u\n", head->e_type);
	printf("Entry point address:               ");
	printf("%#010x\n", (unsigned int)head->e_entry);
}
