/* #include <stdio.h> */
#include "mx_gcd.c"

int mx_lcm(int a, int b) {
    if (a%b == 0) {
        return a;
    }
    if (b%a == 0) {
        return b;
    }
    if (mx_gcd(a, b) == 1) {
        return a * b;
    }
    
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    int res = a;

    while (res < 2147483647) {
        if (res%a == 0 && res%b == 0) return res;
        res++;
    }

    return 0;
}

/* int main() {
    printf("%d\n", mx_lcm(10, 5));
    printf("%d\n", mx_lcm(5, 10));
    printf("%d\n", mx_lcm(2, 3));
    printf("%d\n", mx_lcm(-20, 15));
} */
