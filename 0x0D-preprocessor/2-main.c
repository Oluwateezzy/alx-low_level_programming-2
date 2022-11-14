#include <stdio.h>
#include <stdlib.h>

/**
 * main - call a Macro
 *
 * __FILE__: A macro that prints the current file name
 *
 * Return: Always 0 on success
 */
int main(void)
{
	printf("The file name is %s\n", __FILE__);
	return (0);
}
