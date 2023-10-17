#include "main.h"
/**
 * _printf - function that do samr work as printf
 * @format: character
 * Return: number of charactuers that been printed
 */
int _printf(const char *format, ...)
{
	int i;
	int counter = 0;/* to count each characture that is printed*/
	unsigned int specifier;
	va_list args;/*ceart variadic list*/
		if (format == NULL)/*no character detected*/
			return (-1);/*failed*/
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
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
				       	char_func(args);
					i++;/*move to next one*/
				}
				else if (format[i + 1] == 's')
				{
					specifier = string_func(args);
					counter += specifier;
					i++;
				}
				else if (format[i + 1] == '%')
				{
					 percent_func(args);
					 i++;
				}
			}
		}
		va_end(args);/*rlease the list*/
		return (counter);
}
