/* #include <stdio.h> */
#include "mx_pow.c"
#include "mx_is_prime.c"

bool mx_is_mersenne(int n) {
    int res = 0;
    if (n < 3) return false;
    for(int i = 0; i <= 2147483647; i++) {
        if(mx_is_prime(i)) {
            res = mx_pow(2, i) - 1;
        }
        if (res > n) return false;
        if (n == res)
        {
            return true;
        }
        
    }
    return false;
}

/* int main() {
    printf("%d\n", mx_is_mersenne(3));
    printf("%d\n", mx_is_mersenne(2));
    printf("%d\n", mx_is_mersenne(127));
    printf("%d\n", mx_is_mersenne(255));
} */
