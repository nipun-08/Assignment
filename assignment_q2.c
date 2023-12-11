#include <stdio.h>

int main() {
    char pw[100];
    int UpperCase = 0, LowerCase = 0, Digit = 0, Symbol = 0;

    printf("Enter the pw: ");
    scanf("%s", pw);

    for (int i = 0; pw[i] != '\0'; ++i) {
        if ('A' <= pw[i] && pw[i] <= 'Z') {
            UpperCase = 1;
        } else if ('a' <= pw[i] && pw[i] <= 'z') {
            LowerCase = 1;
        } else if ('0' <= pw[i] && pw[i] <= '9') {
            Digit = 1;
        } else {
            Symbol = 1;
        }
    }

    if (UpperCase && LowerCase && Digit && Symbol) {
        printf("Password is valid.\n");
    } else {
        printf("Password is not valid.\n");
    }

    return 0;
}