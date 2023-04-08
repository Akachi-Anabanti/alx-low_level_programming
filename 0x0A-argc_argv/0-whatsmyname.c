#include "main.h"

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector (a pointer to array of pointers)
 * Return: 0 on succesful exit
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
