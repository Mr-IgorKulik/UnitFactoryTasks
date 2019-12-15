#include <stdbool.h>
//#include <stdio.h>

bool mx_isspace(char c) {
    if (c == ' '
        || c == '\n'
        || c == '\f'
        || c == '\t'
        || c == '\r'
        || c == '\v') {
            return true;
    }
    else
    {
        return false;
    }
}

/* int main() {
    printf("%d\n", mx_isspace(' '));
    printf("%d\n", mx_isspace('7'));
} */
