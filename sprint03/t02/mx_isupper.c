#include <stdbool.h>
//#include <stdio.h>

bool mx_isupper(int c) {
    if (c >= 65 && c <= 90) {
        return true;
    }
    else
    {
        return false;
    }
    
}

/* int main() {
    printf("%d\n", mx_isupper('A'));
    printf("%d\n", mx_isupper('a'));
} */
