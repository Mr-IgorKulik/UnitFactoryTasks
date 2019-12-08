#include "mx_printstr.c"
#include <unistd.h>

void mx_is_positive(int i) {
    if (i == 0) {
        mx_printstr("zero");
    }
    else if (i > 0)
    {
        mx_printstr("positive");
    }
    else
    {
        mx_printstr("negative");
    }
    mx_printstr("\n");
}

/* int main() {
    mx_is_positive(4);
    mx_is_positive(0);
    mx_is_positive(5);
    mx_is_positive(-3);
    mx_is_positive(-6);
} */
