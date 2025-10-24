//subjecets program
#include<stdio.h>
int main()
{
int marks, totalmarks;
float percentage;

percentage = totalmarks * 5/100;

printf("Enter the marks of java :");
scanf("%d",&marks);

printf("Enter the marks of c prog :");
scanf("%d",&marks);

printf("Enter the marks of web tech :");
scanf("%d",&marks);

printf("Enter the marks of comp net :");
scanf("%d",&marks);

printf("Enter the marks of python :");
scanf("%d",&marks);


if (percentage>=90)
{
    printf("A grade");
}else
{
    printf("B grade");
}

    return 0;
}