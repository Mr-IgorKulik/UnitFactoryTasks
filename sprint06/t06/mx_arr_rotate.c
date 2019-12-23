/* #include <stdio.h> */

void mx_arr_rotate(int *arr, int size, int shift) {
    

    if (shift < 0) {
        shift = 0 - shift;
        
        while (shift > size) shift = shift - size;
        
        int tmpArr[shift];
       
        for (int i = 0; i < shift; i++) {
            tmpArr[i] = arr[i];
        }

        for (int i = 0; i < size - shift; i++) {
            arr[i] = arr[i + shift];
        }

        for (int i = size - shift, j = 0; i < size; i++, j++) {
            arr[i] = tmpArr[j];
        }
    } else if (shift > 0) {
        while (shift > size) shift = shift - size;

        int tmpArr[shift];

        for (int i = size - shift, j = 0; i < size; i++, j++) {
            tmpArr[j] = arr[i];
        }

        for(int i = shift, j = 0; i < size; i++, j++) {
            arr[j] = arr[i - shift];
        }

        for (int i = 0; i < shift; i++) {
            arr[i] = tmpArr[i];
        }
    }
    
}

/* int main() {
    int arr[] = {1, 2, 3, 4, 5};
    mx_arr_rotate(arr, 5, 2);
    for (int i = 0; i < 5; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    int arr1[] = {1, 2, 3, 4, 5};
    mx_arr_rotate(arr1, 5, -2);
    for (int i = 0; i < 5; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    int arr2[] = {1, 2, 3, 4, 5};
    mx_arr_rotate(arr2, 5, 11);
    for (int i = 0; i < 5; i++) {
        printf("%d  ", arr2[i]);
    }
}  */
