//swapping program without third variable.
#include<stdio.h>
int main()
{
int a,b;
    printf("Enter the numbers a and b : ");
    scanf("%d%d",&a,&b);

    printf("Before swapping : \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping : \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}