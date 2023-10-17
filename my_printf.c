#include "main.h"
/**
 * _printf - function that do samr work as printf
 * @format: character
 * Return: number of charactuers that been printed
 */
int _printf(const char *format, ...)
{
	int i, specifier, counter = 0;
	va_list args;/*ceart variadic list*/
		if (format == NULL)/*no character detected*/
			return (-1);/*failed*/
		va_start(args, format);/*initlize the list*/
		for (i = 0; format[i] != '\0'; i++)/*end of string*/
		{
			if (format[i] != '%')/*no specifiers*/
			{
				write(1, &format[i], 1);/*write to stdout*/
				counter++;/*print string*/
			}
			else
			{
				if (format[i + 1] == 'c')
				{
					specifier = char_func(args);
					counter += specifier;
				}
				else if (format[i + 1] == 's')
				{
					specifier = string_func(args);
					i++;
					counter += specifier;
				}
				else if (format[i + 1] == '%')
				{
					specifier = percent_func(args);
					counter += specifier;
				}
				else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				{
					specifier = int_func(args);
					counter += specifier;
				}
			}
		}
		va_end(args);/*rlease the list*/
		return (counter);
}
