#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);

    if (marks >= 95)
    {
        printf("A++ Grade\n");
    }
    else if (marks >= 90)
    {
        printf("A Grade\n");
    }
    else if (marks >= 80)
    {
        printf("B Grade\n");
    }
    else if (marks >= 70)
    {
        printf("C Grade\n");
    }
    else 
    {
    printf("Fail");
    }

    return 0;
}