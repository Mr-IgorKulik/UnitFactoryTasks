#include "mx_strlen.c"
#include <unistd.h>

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

/* int main () {
    char *str = "Hello";
    mx_printstr(str);
} */
