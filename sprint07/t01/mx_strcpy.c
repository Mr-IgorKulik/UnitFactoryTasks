/* #include <stdio.h> */

char *mx_strcpy(char *dst, const char *src) {
    int count = 0;
    while(src[count]) {
        count++;
    }

    for(int i = 0; i < count; i++) {
        dst[i] = src[i];
    }
    return dst;
}

/* int main() {
    char *d = NULL;
    char h[] = "Hello!";
    printf("src: %s\n", h);
    printf("dst before: %s\n", d);
    d = mx_strcpy(d, h);
    printf("dst after: %s\n", d);
} */
