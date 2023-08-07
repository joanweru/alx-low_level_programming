#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void prt_mgc(unsigned char *input_e);
void prt_cls(unsigned char *input_e);
void data_prt(unsigned char *input_e);
void prt_entpt(unsigned long int entry_elf, unsigned char *input_e);
void elf_clsfile(int elf_file);
void prt_os(unsigned char *input_e);
void prt_abivr(unsigned char *input_e);
void prt_vrsn(unsigned char *input_e);
void if_elf(unsigned char *input_e);
void prt_typelf(unsigned int type_elf, unsigned char *input_e);

/**
 * if_elf - looks if input file is an ELF file
 * @input_e: pointer to array with ELF magic numbers.
 */
void if_elf(unsigned char *input_e)
{
	int id;

	id = 0;

	for (; id < 4; id++)
	{
		if (input_e[id] != 127 &&
		    input_e[id] != 'E' &&
		    input_e[id] != 'L' &&
		    input_e[id] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * prt_mgc - prints magic numbers of input ELF header.
 * @input_e: pointer to array with ELF magic numbers.
 */
void prt_mgc(unsigned char *input_e)
{
	int id;

	printf("  Magic:   ");

	id = 0;

	for (; id < EI_NIDENT; id++)
	{
		printf("%02x", input_e[id]);

		if (id == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * prt_cls - .......
 * @input_e: ........
 */
void prt_cls(unsigned char *input_e)
{
	printf("  Class:                             ");

	switch (input_e[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", input_e[EI_CLASS]);
	}
}

/**
 * data_prt - .......
 * @input_e: .......
 */
void data_prt(unsigned char *input_e)
{
	printf("  Data:                              ");

	switch (input_e[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", input_e[EI_CLASS]);
	}
}

/**
 * prt_vrsn - .....
 * @input_e: .......
 */
void prt_vrsn(unsigned char *input_e)
{
	printf("  Version:                           %d",
	       input_e[EI_VERSION]);

	switch (input_e[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prt_os - ........
 * @input_e: ......
 */
void prt_os(unsigned char *input_e)
{
	printf("  OS/ABI:                            ");

	switch (input_e[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", input_e[EI_OSABI]);
	}
}

/**
 * prt_abivr - .......
 * @input_e: ......
 */
void prt_abivr(unsigned char *input_e)
{
	printf("  ABI Version:                       %d\n",
	       input_e[EI_ABIVERSION]);
}

/**
 * prt_typelf - ......
 * @type_elf: .....
 * @input_e: ........
 */
void prt_typelf(unsigned int type_elf, unsigned char *input_e)
{
	if (input_e[EI_DATA] == ELFDATA2MSB)
		type_elf >>= 8;

	printf("  Type:                              ");

	switch (type_elf)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type_elf);
	}
}

/**
 * prt_entpt - .......
 * @entry_elf: .......
 * @input_e: .......
 */
void prt_entpt(unsigned long int entry_elf, unsigned char *input_e)
{
	printf("  Entry point address:               ");

	if (input_e[EI_DATA] == ELFDATA2MSB)
	{
		entry_elf = ((entry_elf << 8) & 0xFF00FF00) |
			  ((entry_elf >> 8) & 0xFF00FF);
		entry_elf = (entry_elf << 16) | (entry_elf >> 16);
	}

	if (input_e[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_elf);

	else
		printf("%#lx\n", entry_elf);
}

/**
 * elf_clsfile - ......
 * @elf_file: ......
 */
void elf_clsfile(int elf_file)
{
	if (close(elf_file) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf_file);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elf_clsfile(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		elf_clsfile(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	if_elf(header->e_ident);
	printf("ELF Header:\n");
	prt_mgc(header->e_ident);
	prt_cls(header->e_ident);
	data_prt(header->e_ident);
	prt_vrsn(header->e_ident);
	prt_os(header->e_ident);
	prt_abivr(header->e_ident);
	prt_typelf(header->e_type, header->e_ident);
	prt_entpt(header->e_entry, header->e_ident);

	free(header);

	elf_clsfile(op);
	return (0);
}
