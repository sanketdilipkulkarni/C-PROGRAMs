// Ex:-1

// #include<stdio.h>
// int main()
// {
//     int i;
//   for(i=0; i<=100; i++)
//   {
//     printf("%d\n",i);
//   }
//   return 0;

// }

// Ex:-2

// #include<stdio.h>
// int main()
// {
//   int a;
//   printf("numbers from 1-10:\n");
//   for(a=0; a<=10; a++)
//   {
//     printf("%d\n",a);

//   }
//   return 0;
// }

// Ex:-3

// #include<stdio.h>
// int main()
// {
//   printf("Table of 27:\n");
//   for(int i=27; i<=270; i=i+27)
//   {
//     printf("%d\n",i);
//   }
//   return 0;
// }

// Ex:-4   (Table program)

// #include <stdio.h>
// int main()
// {
//   int num, i;
//   printf("Enter the number:\n");
//   scanf("%d", &num);
//   printf("Table of:%d\n", num);

//   for (i = 1; i <= 10; i++)
//   {
//     printf("%d * %d = %d\n", num, i, num * i);
//   }
//   return 0;
// }



//Ex:- 5 


#include<stdio.h>
int main()
{
  for(int i=10; i>=0; i--)
  {
    printf("%d\n",i);
  }
  return 0;
}