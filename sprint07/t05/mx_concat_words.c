/* #include <stdio.h> */
#include "mx_strjoin.c"
#include "mx_strdel.c"

char *mx_concat_words(char **words) {
    if(words == NULL) return NULL;
    int len = 0;
    int wordsCount = 0;
    while (words[wordsCount] != NULL) {
        wordsCount++;
    }

    for (int i = 0; i < wordsCount; i++) {
        len += mx_strlen(words[i]);
    }

    char *resStr = mx_strnew(len + 1);
    if(!resStr) return NULL;

    resStr[len + 1] = '\0';

    for (int i = 0; i < wordsCount; i++) {
        resStr = mx_strjoin(resStr, words[i]);
        if (i != wordsCount - 1) resStr = mx_strjoin(resStr, " ");
    }

    return resStr;
}

/* int main() {
    char *w[] = {"Free", "your", "mind.", NULL};
    printf("%s\n", mx_concat_words(w));
    printf("%s\n", mx_concat_words(NULL));
} */
