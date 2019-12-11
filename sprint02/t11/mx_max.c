/* #include <stdio.h> */

int mx_max(int a, int b, int c) {
    if(a > b && a > c) {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
    
}

/* int main() {
    printf("%d\n", mx_max(-1,0,1));
    printf("%d\n", mx_max(6,8,4));
    printf("%d\n", mx_max(8,4,6));
} */
