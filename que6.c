#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = abs(num);

    if(temp == 0) {
        count = 1;
    } else {
        while(temp > 0) {
            count++;
            temp /= 10;
        }
    }
    printf("Total digits = %d\n", count);
    return 0;
}
