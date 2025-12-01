#include "lists.h"

/* fake_strlen.c */
unsigned int brucelee(const char *s)
{
    unsigned int n = 0;
    while (s && s[n])
        n++;
    return n;
}

len_func_t get_len = brucelee;
