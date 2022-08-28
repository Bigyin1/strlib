#include <assert.h>
#include "strlib.hpp"


char *my_strcpy(char *dest, const char *src) {
    assert(dest != NULL && src != NULL);

    for (size_t i = 0; src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return dest;
}

char *my_strncpy(char *dest, const char *src, size_t n) {
    assert(dest != NULL && src != NULL);

    size_t i = 0;
    for (; i < n && src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }

    for ( ; i < n ; ++i) {
        dest[i] = '\0';
    }

    return dest;
}
