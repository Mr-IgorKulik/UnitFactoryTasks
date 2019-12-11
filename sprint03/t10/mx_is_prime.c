/* #include <stdio.h> */
#include <stdbool.h>

bool mx_is_prime(int num) {
    if(num < 2) return false;
    
    if(num%2 == 0 && num != 2) return false;

    for(int i = 2; i < num - 1; i++) {
        if(num%i == 0) return false;
    }
    
    return true;
    
}

/* int main() {
    printf("%d\n", mx_is_prime(3));
    printf("%d\n", mx_is_prime(4));
} */
