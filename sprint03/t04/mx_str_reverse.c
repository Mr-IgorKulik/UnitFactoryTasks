/* #include <stdio.h> */
#include "mx_strlen.c"
#include "mx_swap_char.c"

void mx_str_reverse(char *s) {

    for(int i = 0; i < mx_strlen(s)/2; i++) {
        mx_swap_char(&s[i], &s[mx_strlen(s) - i - 1]);
    }
}

/* int main() {
    char g[] = "game over";
    printf("%s\n", g);
    mx_str_reverse(g);
    printf("%s\n", g);
} */
