/* #include <stdio.h> */

char *mx_strncpy(char *dst, const char *src, int len) {
    for (int i = 0; i < len; i++) {
        dst[i] = src[i];
    }

    return dst;
}

/* int main() {
    char s[11] = "yo neo bro";
    char d[11];
    printf("%s\n", mx_strncpy(d, s, 3));
} */
