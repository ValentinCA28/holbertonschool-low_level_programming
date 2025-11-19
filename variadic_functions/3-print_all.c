#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

void print_all(const char *format, ...)
{
    typedef struct
    {
        char        type;
        const char  *fmt;
    } fmt_t;

    fmt_t formats[] = {
        {'c', "%c"},
        {'i', "%d"},
        {'f', "%f"},
        {'s', "%s"},
        {'\0', NULL}
    };

    va_list ap;
    int     i = 0;
    int     j;
    char    *sep = "";
    char    *str;

    va_start(ap, format);

    while (format && format[i])
    {
        j = 0;
        while (formats[j].type != '\0')
        {
            if (format[i] == formats[j].type)
            {
                printf("%s", sep);

                if (formats[j].type == 's')
                {
                    str = va_arg(ap, char *);
                    printf("%s", str ? str : "(nil)");
                }
                else if (formats[j].type == 'f')
                {
                    printf(formats[j].fmt, va_arg(ap, double));
                }
                else
                {
                    printf(formats[j].fmt, va_arg(ap, int));
                }

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
