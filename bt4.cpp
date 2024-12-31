#include <stdio.h>

int main() {
    char str[] = "hello world";
    char a;
    int count = 0;

    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &a);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == a) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", a, count);

    return 0;
}

