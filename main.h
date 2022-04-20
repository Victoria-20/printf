#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* helper functions */
int _print_str(va_list args);
int _print_char(va_list args);

#endif /* _MAIN_H */
