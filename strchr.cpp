#include <assert.h>
#include "strlib.hpp"


char *my_strchr(const char *s, char c) {
    assert(s != NULL);

    for (size_t i = 0; s[i] != c && s[i] != '\0'; ++i) {}

    if (s[i] == '\0')
        return NULL;

    return &s[i];
}
