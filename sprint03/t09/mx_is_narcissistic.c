/* #include <stdio.h> */
#include "mx_pow.c"
#include <stdbool.h>

bool mx_is_narcissistic(int num) {
    int pow = 0;
    int n = num;
    int res = 0;
    if (num < 0) return false;
    while (n%10 > 0) {
        pow++;
        n /= 10;
    }
    
    n = num;

    while (n%10 > 0) {
        res += mx_pow(n%10, pow);
        n /= 10;
    }

    if (res == num)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

/* int main() {
    printf("%d\n", mx_is_narcissistic(3));
    printf("%d\n", mx_is_narcissistic(-3));
    printf("%d\n", mx_is_narcissistic(10));
} */
