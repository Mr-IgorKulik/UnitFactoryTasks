/* #include <stdio.h> */

void mx_deref_pointer(char ******str) {
    *****str = "Follow the white rabbit!";
}

/* int main() {
    char *p = NULL;
    char **p2 = &p;
    char ***p3 = &p2;
    char ****p4 = &p3;
    char *****p5 = &p4;
    char ******p6 = &p5;
    printf("%s\n", p);
    mx_deref_pointer(p6);
    printf("%s\n", p);
} */
