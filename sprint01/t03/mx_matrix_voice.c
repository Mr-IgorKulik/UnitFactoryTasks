#include <unistd.h>

void mx_matrix_voice(void) {
    const char b[1] = {(char)7};
    write(1, b, 1);
}

int main () {
    mx_matrix_voice();
}
