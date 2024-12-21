//To fine if a number is a prime number
//Date: 21-12-2024
//Author: Peter Daniel

#include <stdio.h>

int main()
{
    int a, i;
    int flag = 0;
    printf("please enter a number \n");
    scanf("%d", &a);
    for(i=a-1; i>1; i--)
    {
        if(a%i==0)
        {
            printf("Number is not a prime \n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Number is prime \n");
    }
    return 0;
}
