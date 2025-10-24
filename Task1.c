#include<stdio.h>
int main()
{  
    int num;

    printf("Enter the num:");
    scanf("%d",&num);


    if (num%4==0)
    {
        printf("Leap year");
    }

    return 0;
}