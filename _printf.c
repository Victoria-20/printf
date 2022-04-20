#include "main.h"
/**
* _printf - Produces output according to a format
* @format: provided argument
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, k = 0;
	char *str = "NULL";

	va_start(args, format); /* Iitialize the arguments */
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			/* format[i] == '%' */
			if (format[i + 1] == 'c')	 /* if its a character */
			{
				_putchar(va_arg(args, int));	/* Get the next character */
				i++;
			}
			else if (format[i + 1] == 's')	/* if its a string */
			{
				i++;
				str = va_arg(args, char*);	/* Get the next string and store it in str */
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					k++;
				}
			}
			else if (format[i + 1] == '%')	/* if its a percentage sign */
			{
				i++;
				_putchar('%');
			}
		}
		i++;
	}
	va_end(args);
	return (0);
}
