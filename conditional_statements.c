// 1) only if
// #include<stdio.h>
// int main()
// {
// int num;
// printf("Enter the num :\n");
// scanf("%d",&num);

// if(num>=50)
// {
//     printf("The number is greater than 50");
// }
//     return 0;

// }"""


//2) if else stmt.
#include<stdio.h>
int main()
{
int age;
printf("Enter the Age :");
scanf("%d",&age);

if(age>=0 && age<=12)
{
printf("Child");
}else if(age>=13 && age<=30)
{
    printf("Teen or Young");

}else if(age>=31 && age<=60)
{
    printf("senior citizent and old age");

}else if (age>=61 && age<=90)
{
    printf("very old");
}else 
{
    printf("Death or no more");
}
    return 0;

}