#include "main.h"
/**
* _printf - Produces output according to a format
* @format: provided argument
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, c_counted = 0;
	/* char *str = "NULL"; */

	va_start(args, format); /* Initialize the arguments */
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			c_counted++;
		}
		else	/* format[i] == '%' */
		{
			if (format[i + 1] == 'c')	 /* if its a character */
			{
				_print_char(args);	/* Get the next character */
				c_counted++;
				i++;
			}
			else if (format[i + 1] == 's')	/* if its a string */
			{
				i++;
				/* Get the next string and store it in str */
				_print_str(args);
			}
			else if (format[i + 1] == '%')	/* if its a percentage sign */
			{
				i++;
				_putchar('%');
				c_counted++;
			}
		}
		i++;
	}
	va_end(args);
	return (c_counted);
}
