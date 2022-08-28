#include <stdio.h>

char mg[4] = "abc";

void f(char c[3]);
void f(char c[3]) {

    c[9] = 'a';
}

int main() {


    char a[10] = {0};
    f(a);
    printf("%ld\n", sizeof("abc"));

}
