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
/**
 * simi_puts - function that prints string
 * @c: pointer
 * Return: number of bytes
 */
int simi_puts(char *c)
{
	int count = 0;
		while (*c != '\0')/*character exists*/
		{
			simi_putc(c[count]);/*write each character*/
			count++;
		}
		return (count);
}
