/* #include <stdio.h> */
#include <stdlib.h>

void mx_strdel(char **str) {
    free(str);
    *str = NULL;
}

/* int main() {
    char **str = (char **) malloc(1);
    *str = "Hello";
    printf("%s\n", *str);
    mx_strdel(str);
    printf("%s\n", *str);
} */
