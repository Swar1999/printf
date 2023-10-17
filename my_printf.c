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
	int specifier;
	va_list args;/*ceart variadic list*/
		if (format == NULL)/*no character detected*/
			return (-1);/*failed*/
		va_start(args, format);/*initlize the list*/
		for (i = 0; format[i] != '\0'; i++)/*end of string*/
		{
			if (format[i] != '%')/*no specifiers*/
				counter++;/*print string*/
			else
			{
				if (format[i + 1] == 'c')
				{
					char c = va_arg(args, int);
						simi_putc(c);
						counter++;
				}
				else if (format[i + 1] == 's')
				{
					char *s = va_arg(args, char *);
						specifier = simi_puts(s);
						counter += specifier;
				}
				else if (format[i + 1] == '%')
				{
					simi_putc('%');
					counter++;
				}
			}
				i++;/*move next */
		}
		va_end(args);/*rlease the list*/
		return (counter);
}
