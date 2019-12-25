/* #include <stdio.h> */
#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = (char *) malloc(size + 1);

    for (int i = 0; i <= size; i++) {
        str[i] = '\0';
    }

    return str;
}

/* int main() {
    char *str = mx_strnew(5);
    printf("%s\n", str);
} */
