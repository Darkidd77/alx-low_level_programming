#include <stdio.h>

/**
 * main - a function that prints arguments
 * @argc: argument count
 * @argv: argument vetor
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
