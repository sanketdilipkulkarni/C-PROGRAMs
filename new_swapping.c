//swapping with 2 vairables
#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);

    printf("Before swapping:\n %d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping:\n  %d %d",a,b);

    return 0;
}