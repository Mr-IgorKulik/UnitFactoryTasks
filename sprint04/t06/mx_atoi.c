/* #include <stdio.h> */
#include "mx_isdigit.c"
#include "mx_isspace.c"

int mx_atoi(const char *str) {
    char num[100];
    int n = 0;
    int res = 0;
    while (mx_isspace(str[n])) {
        n++;
    }

    if(str[n] == '-') {
        n++;
        int i = 0;
        while(mx_isdigit(str[n])) {
            num[i] = str[n];
            n++;
            i++;
        }
        num[i+1] = '\0';

        i = 0;
        while (num[i]) i++;


        for (int j = i - 1, p = 1; j >= 0; j--, p*=10) {
            res += (num[j]-48) * p;
        }

        return 0 - res;
    } else if (str[n] == '+')
    {
        n++;
        int i = 0;
        while(mx_isdigit(str[n])) {
            num[i] = str[n];
            n++;
            i++;
        }
        num[i+1] = '\0';

        i = 0;
        while (num[i]) i++;


        for (int j = i - 1, p = 1; j >= 0; j--, p*=10) {
            res += (num[j]-48) * p;
        }

        return res;
    } else
    {
        int i = 0;
        while(mx_isdigit(str[n])) {
            num[i] = str[n];
            n++;
            i++;
        }
        num[i+1] = '\0';

        i = 0;
        while (num[i]) i++;


        for (int j = i - 1, p = 1; j >= 0; j--, p*=10) {
            res += (num[j]-48) * p;
        }

        return res;
    }
    
    return 0;
}

/* int main() {
    printf("%d\n", mx_atoi(" \n  -1203dfasdf  \n"));
    printf("%d\n", mx_atoi(" \n  1203 dfasdf  \n"));
    printf("%d\n", mx_atoi("+1203 dfasdf  \n"));
} */
