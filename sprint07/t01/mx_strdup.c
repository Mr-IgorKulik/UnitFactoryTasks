/* #include <stdio.h> */
#include "mx_strlen.c"
#include "mx_strcpy.c"
#include "mx_strnew.c"

char *mx_strdup(const char *str) {
    char *resStr = mx_strnew(mx_strlen(str));
    if(!resStr) return NULL;
    mx_strcpy(resStr, str);

    return resStr;
}

/* int main() {
    char str1[] = "Hello";
    printf("%s\n", str1);
    char *str2 = NULL;
    printf("%s\n", str2);
    str2 = mx_strdup(str1);
    printf("%s\n", str2);
} */
