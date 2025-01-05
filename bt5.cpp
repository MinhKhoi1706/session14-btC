#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int wordcount = 0;

    printf("nhap vao 1 chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')) {
            wordcount++;
        }
    }

    printf("%d\n", wordcount);

    return 0;
}

