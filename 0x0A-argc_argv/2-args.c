#include <stdio.h>
#include "main.h"
/**
 * main - this is a function to print the number of arguments passed into it
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}
