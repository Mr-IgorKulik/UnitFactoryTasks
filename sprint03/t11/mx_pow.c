/* #include <stdio.h> */

double mx_pow(double n, unsigned int pow) {
    if (pow == 0) return 1;
    double tmp = n;
    for(unsigned int i = 0; i < pow - 1; i++) {
        n *= tmp;
    }
    return n;
}

/* int main() {
    printf("%f\n", mx_pow(3, 3));
    printf("%f\n", mx_pow(2.5, 3));
    printf("%f\n", mx_pow(2, 0)); 
} */
