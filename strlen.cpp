#include <assert.h>
#include "strlib.hpp"


size_t my_strlen(const char *s) {
    assert(s != NULL);

    size_t i = 0;
    for (; s[i] != '\0'; ++i) {}

    return i;
}
