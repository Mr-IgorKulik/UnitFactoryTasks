#include <stdbool.h>
//#include <stdio.h>

bool mx_isapha(int c) {
    if ((c >= 65 && c <= 90)
        || (c >= 97 && c <= 122)) {
            return true;
    }
    else
    {
        return false;
    }
}

/* int main() {
    printf("%d\n", mx_isapha('a'));
    printf("%d\n", mx_isapha('A'));
    printf("%d\n", mx_isapha('z'));
    printf("%d\n", mx_isapha('Z'));
    printf("%d\n", mx_isapha('7'));
} */
