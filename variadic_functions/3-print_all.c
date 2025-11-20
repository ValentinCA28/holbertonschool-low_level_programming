#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

typedef struct {
    char spec;
    char *fmt;
} format_t;

void print_all(const char *format, ...)
{
    format_t check[] = {
        {'c', "%c"},
        {'i', "%d"},
        {'f', "%f"},
        {'s', "%s"},
        {'\0', NULL}
    };

    va_list args;
    int i = 0;
    char *sep = "";
    char *s;

    va_start(args, format);

    while (format && format[i])
    {
        int j = 0;
        while (check[j].spec != '\0')
        {
            if (format[i] == check[j].spec)
            {
                printf("%s", sep);
                sep = ", ";

                if (check[j].spec == 's')
                {
                    s = va_arg(args, char *);
                    printf("%s", s ? s : "(nil)");
                }
                if (check[j].spec != 's')
                {
                    if (check[j].spec == 'f')
                        printf(check[j].fmt, va_arg(args, double));
                    else
                        printf(check[j].fmt, va_arg(args, int));
                }
                break;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
