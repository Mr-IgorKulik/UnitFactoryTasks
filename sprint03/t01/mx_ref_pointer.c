/* #include <stdio.h> */

void mx_ref_pointer(int i, int ******ptr) {
    ******ptr = i;
}

/* int main() {
    int p = 0;
    int *p1 = &p;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    printf("%d\n", p);
    mx_ref_pointer(5, p6);
    printf("%d\n", p);
} */
