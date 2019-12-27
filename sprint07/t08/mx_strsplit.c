/* #include <stdio.h> */
#include "mx_count_words.c"
#include "mx_strnew.c"
#include "mx_strdel.c"
#include "mx_strncpy.c"

char **mx_strsplit(char const *s, char c) {
    if(s == NULL) return NULL;

    char **resArr = (char**) malloc(mx_count_words(s,c));

    int j = 0;
    int i = -1;
    int k = 0;

    while(s[j] != '\0') {
        while (s[j] == c) j++;

        if(s[j] != c) {
            int count = j;
            while (s[count] != c && s[count] != '\0') {
                count++;
            }
            i++;
            resArr[i] = mx_strnew(count - j);
            while (s[j] != c && s[j] != '\0')
            {
                resArr[i][k] = s[j];
                k++; 
                j++;
            }
            
            k = 0;
        }
    } 

        return resArr;
}

/* int main() {
    char **arr = mx_strsplit("**Good bye,**Mr.*Anderson.****", '*');
    char **arr2 = mx_strsplit("   Knock,   knock,   Neo.  ", ' ');

    for (int i = 0; i < 3; i++) {
        printf("%s ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%s ", arr2[i]);
    }
} */

