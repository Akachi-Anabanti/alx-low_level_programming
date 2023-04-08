#include "main.h"

/**
 * main - prints the arguments in passed to it
 * @argc: Argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
