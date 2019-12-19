#include "mx_printstr.c"
#include "mx_printint.c"

int main (int argc, const char* argv[]) {
    mx_printstr(argv[0]);
    mx_printstr("\n");
    mx_printint(argc);
    mx_printstr("\n");
}
