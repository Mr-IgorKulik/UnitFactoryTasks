#include "mx_printstr.c"

int main (int argc, const char* argv[]) {
    for(int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printstr("\n");
    }
}
