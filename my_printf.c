#include "main.h"
/**
 * _printf - function that do samr work as printf
 * @format: character
 * Return: number of charactuers that been printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;/* to count each characture that is printed*/
	int specifier;
	va_list character;/*ceart variadic list*/
		if (format == NULL)/*no character detected*/
			return (-1);/*failed*/
		va_start(character, format);/*initlize the list*/
		while (*format)/*end of string*/
		{
			if (*format != '%')/*no specifiers*/
				counter++;/*print string*/
			else
			{
				format++;
				if (*format == '\0')
					break;/*finish program*/
				if (*format == 'c')
				{
					specifier = char_func(character);
					counter += specifier;
				}
				else if (*format == 's')
				{
					specifier = string_func(character);
					counter += specifier;
				}
				else if (*format == '%')
				{
					specifier = percent_func(character);
					counter += specifier;
				}
			}

		}
		va_end(character);/*rlease the list*/
		return (counter);
}
