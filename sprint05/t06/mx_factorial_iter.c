/* #include <stdio.h> */

int mx_factorial_iter(int n) {
    int res = 1;
    if(n == 0) return 1;
    if(n < 0) return 0;
    for (int i = 1; i <= n; i++) {
        if(res <= 2147483647 && n > 0) {
            res *= i;
        }else
        {
            return 0;
        }
        
    }
    return res;
}

/* int main() {
    printf("%d\n", mx_factorial_iter(0));
    printf("%d\n", mx_factorial_iter(2));
    printf("%d\n", mx_factorial_iter(10));
    printf("%d\n", mx_factorial_iter(-1));
} */
