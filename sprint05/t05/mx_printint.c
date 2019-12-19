#include "mx_printchar.c"
#include <unistd.h>
#include <stdbool.h>

void mx_printint(int n){
    int count = 0; 

    if(n == 0) mx_printchar('0'); 
    
    bool flag = true;
    if(n < 0) {
        flag = false;
        n = 0 - n;
    }

    int num = n; 

    while (num%10 > 0) {
        count++;
        num /= 10;
    }

    int arr[count];
    count = 0;

    while(n%10 > 0) {
        arr[count] = n%10;
        count++;
        n /= 10;
    }

    if (flag) {
        for (int i = count - 1; i >= 0; i--) {
            mx_printchar(arr[i] + 48);
        }
    }
    else
    {
        mx_printchar('-');
        for(int i = count - 1; i >= 0; i--) {
            mx_printchar(arr[i] + 48);
        }
    }
    
}

/* int main() {
    mx_printint(0);
    mx_printchar('\n');
    mx_printint(-25);
    mx_printchar('\n');
    mx_printint(-2147483648);
} */
