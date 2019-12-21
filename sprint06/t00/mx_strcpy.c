/* #include <stdio.h> */

char *mx_strcpy(char *dst, const char *src) {
    int count = 0;
    while(src[count]) {
        count++;
    }
    char res[count + 1];
    res[count] = '\0';

    for(int i = 0; i < count; i++) {
        res[i] = src[i];
    }
    dst = res;
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
