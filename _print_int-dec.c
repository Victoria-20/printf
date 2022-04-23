#include "main.h"

int _print_int(va_list args){
		i = va_arg(arg,int);         //Fetch Decimal/Integer argument
                if(i<0) 
                        { 
                            i = -i;
                            putchar('-'); 
                        } 
                        _putchar(convert(i,10));
			return (0);
}
