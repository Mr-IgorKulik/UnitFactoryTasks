/* #include <stdio.h> */
#include "mx_strcmp.c"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int mid = -1;
    int left = 0;
    int right = size;

    while(1) {
        mid = (left + right) / 2;
        if(mx_strcmp(s, arr[mid]) > 0) {
            left = mid + 1;
        } else if (mx_strcmp(s, arr[mid]) < 0)
        {
            right = mid - 1;
        } else
        {
            return mid;
        }
        if (left > right) {
            return -1;
        }
        *count = *count + 1;
    }

    return -1;
}

/* int main() {
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;
    printf("index = %d /// count = %d\n", mx_binary_search(arr, 6, "ab", &count), count);
    count = 0;
    printf("index = %d /// count = %d\n", mx_binary_search(arr, 6, "aBc", &count), count);
    count = 0;
    printf("index = %d /// count = %d\n", mx_binary_search(arr, 6, "aBz", &count), count);
    count = 0;
} */
