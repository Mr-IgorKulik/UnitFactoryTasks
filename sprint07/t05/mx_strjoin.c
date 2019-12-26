/* #include <stdio.h> */
#include "mx_strdup.c"
#include "mx_strcat.c"

char *mx_strjoin(const char *s1, const char *s2) {
    char *resStr = mx_strnew(mx_strlen(s1) + mx_strlen(s2) + 1);
    if (!resStr) return NULL;

    resStr[mx_strlen(s1) + mx_strlen(s2) + 1] = '\0';

    mx_strcpy(resStr, s1);
    mx_strcat(resStr, s2);

    return resStr;
}

/* int main() {
    char s1[] = "Hello. ";
    char s2[] = "It's me!";

    char *res = mx_strjoin(s1, s2);
    printf("%s\n", res);
} */
