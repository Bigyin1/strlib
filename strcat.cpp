#include <assert.h>
#include "strlib.hpp"

char *my_strcat(char *dest, const char *src) {
    assert(dest != NULL && src != NULL);

    char *destStart = dest;

    dest += my_strlen(dest);

    my_strcpy(dest, src);

    return destStart;
}

char *my_strncat(char *dest, const char *src, size_t n) {
    assert(dest != NULL && src != NULL);

    char *destStart = dest;

    dest += my_strlen(dest);

    for (size_t i = 0; i < n && src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return destStart;
}
