/* #include <stdio.h> */

int mx_gcd(int a, int b) {
    if (a < b) {
        int t = a;
        a = b;
        b = t;    
    }

    if(a < 0) a = 0 - a;
    if(b < 0) b = 0 - b;

    if (b == 0) {
        return a;
    }

    return mx_gcd(b, a%b); 
}

/* int main () {
    printf("%d\n", mx_gcd(15, -20));
} */
