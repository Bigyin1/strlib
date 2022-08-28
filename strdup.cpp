#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "strlib.hpp"


char *strdup(const char *s) {
    assert(s != NULL);

    char *newStr = malloc(my_strlen(s) + 1);
    if (newStr == NULL)
        return NULL;

    my_strcpy(newStr, s);
    return newStr;
}
