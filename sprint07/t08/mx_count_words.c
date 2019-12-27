/* #include <stdio.h> */

int mx_count_words(const char *str, char delimiter) {
    int count = 0;
    int res = 0;

    while(str[count] == delimiter) count++;

    while (str[count]) {
        if (str[count + 1] != '\0') {
            if(str[count] == delimiter && str[count + 1] != str[count]) {
                res++;
            }
        }
        count++;
    }
    return res + 1;
}

/* int main() {
    char str[] = " follow * the white rabbit ";
    printf("%d\n", mx_count_words(str, '*'));
    printf("%d\n", mx_count_words(str, ' '));
} */
