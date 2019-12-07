#include "mx_printchar.c"
#include <unistd.h>

void mx_only_printable () {
    char str[2];
    str[1] = '\0';
    for (int i = 126; i > 31; i--) {
        str[0] = i;
        write(1, str, 1);
    }
    write(1, "\n", 1);
}

/* int main () {
    mx_only_printable();
}
 */
