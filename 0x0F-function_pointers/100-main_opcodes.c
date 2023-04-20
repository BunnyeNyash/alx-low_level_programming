#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num_bytes; i++)
		printf("%02hhx%c", main_opcode[i], i == num_bytes - 1 ? '\n' : ' ');

	return (0);
}
