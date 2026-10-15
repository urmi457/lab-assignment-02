#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = abs(num);

    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of Digits = %d\n", sum);
    return 0;
}
