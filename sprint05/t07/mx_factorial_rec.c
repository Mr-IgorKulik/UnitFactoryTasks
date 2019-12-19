/* #include <stdio.h> */

int mx_factorial_rec(int n) {
    if(n < 0 || n > 2147483647) return 0;
    if(n == 0) return 1;
    else return n * mx_factorial_rec(n - 1);
}

/* int main() {
    printf("%d\n", mx_factorial_rec(2));
    printf("%d\n", mx_factorial_rec(5));
    printf("%d\n", mx_factorial_rec(0));
    printf("%d\n", mx_factorial_rec(-1));
    printf("%d\n", mx_factorial_rec(55));
} */
