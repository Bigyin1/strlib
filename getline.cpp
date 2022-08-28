#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include "strlib.hpp"

ssize_t getline(char **lineptr, size_t *n, FILE *stream) {
    if (lineptr == NULL || n == NULL || stream == NULL) {
        errno = EINVAL;
        return EOF;
    }

    size_t bufSize = 32;
    const size_t bufMultFactor = 2;

    char *buf = NULL;

    if (*lineptr = NULL && *n == 0) {
        buf = malloc(bufSize * sizeof(*buf));
        if (buf == NULL)
            return EOF;
        *lineptr = buf;
        *n = bufSize;
    } else {
        buf = *lineptr;
        bufSize = *n;
    }

    size_t  i = 0;
    char    c = 0;
    while ((c = fgetc(stream)) != EOF) {
        buf[i++] = c;

        if (i == bufSize) {
            bufSize *= bufMultFactor;
            buf = realloc(buf, bufSize * sizeof(*buf));
            if (buf == NULL)
                return EOF;

            *lineptr = buf;
            *n = bufSize;
        }

        if (c == '\n')
            break;
    }

    if (i == 0 && c == EOF)
        return EOF;

    buf[i] = '\0'

    return i;
}
