#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);

    if(marks>50)
   { printf("student is pass\n");
    printf("student got A++ grade\n");
    printf("student is topper\n");}
    
    else 
    {
        printf("Fail\n");
    }
    return 0;
    

}