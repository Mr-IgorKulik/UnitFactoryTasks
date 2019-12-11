#include <stdio.h>

int mx_tolower(int c) {
    if(c >= 97 && c <= 122) {
        return c - 32;
    }
    else
    {
        return c;
    }
    
}

int main () {
    printf("%c", mx_tolower('a'));
    printf("%c", mx_tolower('A'));
}
