#include "variadic_functions.h"
#include "brucelee.h"

/**
 * print_all - prints anything (redirects to the real function)
 * @format: types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list ap;

    va_start(ap, format);
    print_all_magic(format, ap);
    va_end(ap);
}
