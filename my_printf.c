#include "main.h"
/**
 * _printf - function that do samr work as printf
 * @formate: character
 * Return: number of charactuers that been printed
 */
int _printf(const char *format, ...)
{
	int i = 0;/*counter*/
	int counter = 0;/* to count each characture that is printed*/
	int specfier;
	va_list character;/*ceart variadic list*/
		if (format == NULL)/*no character detected*/
			return (-1);/*failed*/
		va_start(character, format);/*initlize the list*/
		while (format[i] != '\0')/*end of string*/
		{
			if (format[i] != '%')/*no specifiers*/
				counter++;/*print string*/
			else
			{
				format++;
				if (format[i] == 'c')
				{
					specifier = char_func(format);
					counter += specifier;
				}
				else if (format[i] == 's')
				{
					specifier = string_func(format);
					counter += specifier;
				}
				else if (format[i] == '%')
				{
					specifier = percent_func(format);
					counter += specifier;
				}
                	}
                	i++;
		}
		va_end(character);/*rlease the list*/
		return (counter);/
}
