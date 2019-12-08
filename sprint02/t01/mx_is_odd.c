#include "mx_printstr.c"
#include <stdbool.h>
//#include <stdio.h>

bool mx_is_odd(int value) {
    if (value%2 == 0) {
        return true;
    }
    else
    {
        return false;
    }
}

/* int main() {
    printf("%d", mx_is_odd(4));
    printf("%d", mx_is_odd(5));
    printf("%d", mx_is_odd(0));
    printf("%d", mx_is_odd(-6));
    printf("%d", mx_is_odd(-7));
} */
