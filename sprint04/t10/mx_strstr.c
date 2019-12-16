/* #include <stdio.h> */
#include "mx_strncmp.c"
#include "mx_strchr.c"
#include "mx_strlen.c"

char *mx_strstr(const char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);

    for (int i = 0; i < len1; i++) {
        if(mx_strncmp(&s1[i], s2, len2) == 0) {
            return (char *)&s1[i];
        }
        printf("%s ---- ", &s1[i]);
        printf("%d\n", mx_strncmp(&s1[i], s2, len2));
    }

    return NULL;
} 

/* int main() {
    char str1[] = "Hello! It's me!";
    char str2[] = "It's";
    printf("%s\n", mx_strstr(str1, str2));
} */
