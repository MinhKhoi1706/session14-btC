#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    int length = strlen(str);

    printf("%s\n", str);

    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

