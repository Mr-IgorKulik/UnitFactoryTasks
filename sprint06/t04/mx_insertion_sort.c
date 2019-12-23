/* #include <stdio.h> */
#include "mx_strlen.c"

int mx_insertion_sort(char **arr, int size) {
    char *tmp = NULL;
    int item;
    int count = 0;

    for (int i = 1; i < size; i++) {
        tmp = arr[i];
        item = i - 1;

        while (item >= 0 && (mx_strlen(arr[item]) > mx_strlen(tmp)))
        {
            arr[item + 1] = arr[item];
            arr[item] = tmp;
            item--;
            count++;
        }
    }

    return count;
}

/* int main() {
    char *arr[] = {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa"};
    printf("%d\n", mx_insertion_sort(arr, 5));
    char *arr1[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
    printf("%d\n", mx_insertion_sort(arr1, 5));
} */
