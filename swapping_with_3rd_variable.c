// swapping with 3rd variable.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number a and b :\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping :\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    c = a;
    a = b; // swapping using 3rd variable
    b = c;

    printf("After swapping :\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}