/* #include <stdio.h> */

int mx_pow_rec(double n, unsigned int pow) {
    if (pow == 0) return 1;
    else return n * mx_pow_rec(n, pow - 1);
}

/* int main() {
    printf("%d\n", mx_pow_rec(5, 4));
} */
