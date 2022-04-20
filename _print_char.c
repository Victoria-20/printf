#include "main.h"

int _print_char(va_list args)
{
	char c = va_arg(args, int);	/* Get the next character */
	return (_putchar(c));
}
