/* #include <stdio.h> */
#include "mx_strtrim.c"

char *mx_del_extra_whitespaces(const char *str) {
    if(str == NULL) return NULL;
    char *tmpStr = mx_strtrim(str);
    if(tmpStr == NULL) return NULL;
    char *resStr = mx_strnew(mx_strlen(tmpStr));
    int i = 0;
    int j = 0;
    while (tmpStr[j] != '\0') {
        if (!mx_isspace(tmpStr[j])) {
            resStr[i] = tmpStr[j];
            i++;
            j++;
        }
        if(mx_isspace(tmpStr[j])) {
            resStr[i] = ' ';
            i++;
            while(mx_isspace(tmpStr[j])) j++;
        }
        
    }

    return resStr;
}

/* int main() {
    char *s = "\f My name... is \r Neo \t\n";
    char *resStr = mx_del_extra_whitespaces(s);
    printf("%s\n", resStr);
} */
