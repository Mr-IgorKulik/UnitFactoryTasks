#include <unistd.h>
#include "mx_printchar.c"

void mx_isos_triangle(unsigned int lenght, char c) {
    for (unsigned int i = 1; i < lenght + 1; i++) {
        for (unsigned int j = 0; j < i; j++) {
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}

/* int main() {
    mx_isos_triangle(3, '*');
} */
