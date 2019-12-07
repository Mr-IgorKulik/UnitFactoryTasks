//#include <stdio.h>

int mx_strlen (char* s) {
    int i = 0;
    while(s[i]) i++;
    return i;
}

/* int main () {
    char str[] = "Hello";
    printf("%d", mx_strlen(str));
} */
