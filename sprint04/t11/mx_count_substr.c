/* #include <stdio.h> */
#include "mx_strstr.c"

int mx_count_substr(const char *str, const char *sub) {
    int res = 0;
    int len = mx_strlen(sub);

    for(int i = 0, l = mx_strlen(str); i < l; i++) {
        if (mx_strstr(&str[i], sub) != NULL && str[i] == sub[0]) {
            i += len;
            res++;
        }
    }

    return res;
}

/* int main() {
    char str[] = "yo,     yo,   yo,  yo Neo";
    char sub[] = "yo";
    printf("%d\n", mx_count_substr(str, sub));
} */
