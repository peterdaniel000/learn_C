//To learn the Arithematic operation of c programming language
//Date: 22-12-2024
//Author: Peter Daniel

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d", &year);
    //printf("the year you wrote is %d", year);
    if(((year % 4 == 0)&&(year % 100 != 0)) ||(year%400 == 0))
    {
        printf("Year %d is a leap year \n", year);
    }
    else
    {
        printf("year %d is not a leap year \n", year);
    }
    return 0;
}
