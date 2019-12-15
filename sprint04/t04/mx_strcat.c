/* #include <stdio.h> */
#include "mx_strlen.c"

char *mx_strcat(char *s1, const char *s2) {
    int len = mx_strlen(s1) + mx_strlen(s2);

    for (int i = mx_strlen(s1), j = 0; i < len; i++, j++) {
        s1[i] = s2[j];
    }

    return s1;
}

/* int main() {
    char str[] = "Hello!";
    char str2[] = "It's me!";

    printf("%s\n", mx_strcat(str, str2));
} */
