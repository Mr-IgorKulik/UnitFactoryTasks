/* #include <stdio.h> */
#include "mx_islower.c"
#include "mx_isupper.c"
#include "mx_tolower.c"
#include "mx_toupper.c"

void mx_reverse_case(char *s) {
    int len = 0;
    while(s[len]) len++;

    for(int i = 0; i < len; i++) {
        if(mx_islower(s[i])) {
            s[i] = mx_toupper(s[i]);
        }
        else
        {
            s[i] = mx_tolower(s[i]);
        }
        
    }
}

/* int main() {
    char h[] = "HeLLO Neo!";
    printf("%s\n", h);
    mx_reverse_case(h);
    printf("%s\n", h);
} */
