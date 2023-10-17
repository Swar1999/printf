#include "main.h"
/**
 * simi_putc - function that print character to stander output
 * @c : char to be printed
 * Return: number of bytes
 */
int simi_putc(char c)
{
	return (write(1, &c, 1));
}

