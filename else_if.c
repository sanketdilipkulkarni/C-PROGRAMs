#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);

    if (age > 50)
    {
        printf("He is aged\n");
        printf("He is getting old\n");
    }

    else if (age < 50, age > 25)
    {
        printf("He is young");
    }

    else
    {
        printf("adult");
    }
    return 0;
}
