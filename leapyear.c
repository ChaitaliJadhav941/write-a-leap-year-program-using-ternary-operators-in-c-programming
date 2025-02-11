#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);
    ((year %400 ==0) || ((year%4==0 && year % 100 != 0)))? printf("year is leap year \n"): printf("year is not leap year \n");
    return 0;
 }
 