#include <stdio.h>
#include <assert.h>
#include "strlib.hpp"


int my_puts(const char *s) {
    assert(s != NULL);

    for (size_t i = 0; s[i] != '\0'; ++i) {
        if (putc(s[i]) == EOF)
            return EOF;
    }

    if (putc('\n') == EOF)
        return EOF;

    return 1;
}
