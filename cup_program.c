// calculating total bill for hotel
#include <stdio.h>
int main()
{
    int cups, bill;
    printf("Enter the number of cups :");
    scanf("%d", &cups);

    if (cups <= 20)
    {
        bill=cups*10;
    }
    else
        {
            bill=cups*7;
        }

        printf("total bill= %d rs\n",bill);
    return 0;
}