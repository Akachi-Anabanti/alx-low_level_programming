#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: Argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
