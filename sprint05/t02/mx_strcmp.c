/* #include <stdio.h> */

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while((s1[i] == s2[i]) && s1[i] && s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}

/* int main() {
    char str1[] = "Hi!";
    char str2[] = "Hi!";
    char str3[] = "Hello";
    char str4[] = "Hi";
    printf("%d\n", mx_strcmp(str1, str2));
    printf("%d\n", mx_strcmp(str1, str3));
    printf("%d\n", mx_strcmp(str3, str1));
    printf("%d\n", mx_strcmp(str1, str4));
} */
