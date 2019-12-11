/* #include <stdio.h> */

int mx_sum_digits(int num) {
    int res = 0;
    if (num < 0) num = 0 - num;
    while (num%10 > 0)
    {
        res += num%10;
        num /= 10;
    }
    return res;
}

/* int main() {
    printf("%d\n", mx_sum_digits(435));
    printf("%d\n", mx_sum_digits(-555));
} */
