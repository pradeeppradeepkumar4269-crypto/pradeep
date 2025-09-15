#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
        printf("The number %d is a 3-digit number.\n", num);
    } else {
        printf("The number %d is NOT a 3-digit number.\n", num);
    }

    return 0;
}
