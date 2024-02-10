#include<stdio.h>

int main() {
    int num = 0;
    for (int i = 0; i < 11; i++)
    {
        printf("i = %d\n", i);
        for (int j = 0; j < 11; j++)
        {
            printf("j = %d\n", j);
            printf("Enter any random number here: ");
            scanf("%d", &num);
            if (num==1)
            {
                goto end;
            }
            
        }
    }

    end:
        printf("This is the end");
    
    return 0;
}