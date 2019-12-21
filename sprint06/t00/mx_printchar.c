#include <unistd.h>

void mx_printchar(char c) {
    const char str[1] = {c};
    write(1, str, 1);
}

/* int main () {
    mx_printchar('a');
    mx_printchar('b');
    mx_printchar('c');
    mx_printchar('d');
} */
