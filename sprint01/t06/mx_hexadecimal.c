#include "mx_printchar.c"
#include <unistd.h>

void mx_hexadecimal (void) {
    for (int i = 49; i < 58; i++) {
        mx_printchar(i);
    }

    for (int i = 65; i < 71; i++) {
        mx_printchar(i);
    }
    mx_printchar('\n');
}

/* int main () {
    mx_hexadecimal();
}
 */
