#include "brucelee.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all_magic - prints anything, the real function
 * @format: format string
 */
void print_all_magic(const char *format, ...)
{
    typedef struct fmt
    {
        char type;
        const char *spec;
    } fmt_t;

    fmt_t specs[] = {
        {'c', "%c"}, {'i', "%d"}, {'f', "%f"}, {'s', "%s"},
        {'\0', NULL}
    };

    va_list ap;
    int i = 0;
    int j;
    const char *sep = "";
    char *str;

    va_start(ap, format);
    while (format && format[i])
    {
        j = 0;
        while (specs[j].type)
        {
            if (format[i] == specs[j].type)
            {
                printf("%s", sep);
                if (specs[j].type == 's')
                {
                    str = va_arg(ap, char *);
                    printf("%s", str ? str : "(nil)");
                }
                else if (specs[j].type == 'f')
                    printf("%f", va_arg(ap, double));
                else
                    printf(specs[j].spec, va_arg(ap, int));
                sep = ", ";
                break;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(ap);
}
