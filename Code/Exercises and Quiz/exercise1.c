#include <stdio.h>

int main() {
    int num;
    printf("Enter the number for which you want the table: ");
    scanf("%d", &num);

    printf("Find the table of %d is below: \n", num);
    for(int i=1; i<=10; i++) {
        printf("%d X %d = %d\n", num, i, num*i);
    }

    return 0;
}