#include <unistd.h>

void mx_printchar(char c) {
    const char str[1] = {c};
    write(1, str, 1);
}
