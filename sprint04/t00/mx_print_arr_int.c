#include "mx_printint.c"

void mx_print_arr_int(const int *arr, int size) {
    for(int i = 0; i < size; i++) {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}

/* int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    mx_print_arr_int(arr, 5);
} */
