/* #include <stdio.h> */
#include "mx_strnew.c"
#include "mx_strdel.c"
#include "mx_strncpy.c"
#include "mx_strlen.c"
#include "mx_isspace.c"

char *mx_strtrim(const char *str) {
    if(str == NULL) return NULL;
    while (mx_isspace(str[0])) str++;

    int tmp = mx_strlen(str);
    while (mx_isspace(str[tmp - 1])) tmp--;

    char *resStr = mx_strnew(tmp);
    if(!resStr) return NULL;

    mx_strncpy(resStr, str, tmp);
    
    return resStr;
    
}

/* int main() {
    printf("%s\n", mx_strtrim("\f My name... is Neo \t\n "));
} */
