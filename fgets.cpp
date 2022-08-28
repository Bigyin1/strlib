#include <stdio.h>
#include <assert.h>
#include "strlib.hpp"


char *fgets(char *s, size_t size, FILE *stream) {
    assert(s != NULL && stream != NULL);

    if (size == 0)
        return s;

    if (size == 1) {
        s[0] = '\0';
        return s;
    }

    size_t  i = 0;
    char    c = 0;
    while (i < size - 1) {
        char c = fgetc(stream);
        if (c == EOF)
            break;

        s[i++] = c;

        if (c == '\n')
            break;
    }

    if (c == EOF && i == 0)
        return NULL;

    s[i] = '\0';

    return s;
}
