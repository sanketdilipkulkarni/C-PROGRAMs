#include <stdio.h> 
 
 
int main ()
{ 
     
    int n, a, b, c, sum, rev; 
     
    printf("Enter a three-digit number: "); 
    scanf("%d", &n); 
 
    a = n % 10;   // last digit 
 
 

 
    n = n / 10; 
 
    b = n % 10;   // middle digit 
    n = n / 10;  
 
    c = n % 10;   // first digit 
 
    sum = a + b + c; 
    rev = (a * 100) + (b * 10) + (c * 1); 
 
    printf("\nSum of digits = %d", sum); 
    printf("\nReverse of number = %d", rev); 
 
    return 0; 
} 