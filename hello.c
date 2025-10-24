#include<stdio.h>
int main()
{
    int age;
    printf("enter the age : ");
    scanf("%d",&age);

    if(age>20)
    {
        printf("adult\n");
        printf("valid for voter id\n");
        printf("valid for marriage\n");

    }
    else
    {
        printf("not allowed for anything\n");
    } 
    return 0;

}
