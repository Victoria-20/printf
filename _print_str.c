#include "main.h"


int _print_str(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		_putchar(s[k]);
		k++;
	}
	return (0);

}
