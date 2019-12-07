#include "mx_printchar.c"
#include <unistd.h>

void mx_print_alphabet (void) {
    for (int i = 65; i < 91; i++) {
        if (i%2 != 0) mx_printchar(i);
        else mx_printchar(i+32);
    }
    mx_printchar('\n');
}

/* int main () {
    mx_print_alphabet();
} */
