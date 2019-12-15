/* #include <stdio.h> */

int mx_sqrt(int x) {
    int sqtr = 1;
    while(sqtr < x) {
        if(sqtr * sqtr == x) {
            return sqtr;
        }
        sqtr++;
    }

    return 0;
}

/* int main() {
    printf("%d\n", mx_sqrt(3));
    printf("%d\n", mx_sqrt(4));
} */
