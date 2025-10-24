// #include<stdio.h>
// int main()
// {
//     int i=0;
//      printf("Enters the numberes from 0-200:\n",i);
//      while(i<=200)
//      {
//         printf("%d\n",i);
//         i++;
//      } 
     

// return 0;
// }


// #include<stdio.h>
// int main()
// {
//    int i=0;
//    printf("all even numbers from 0-50:\n");


//    while(i<=50)
//    {
//       printf("%d\n",i);
//       i=i+2;
//    }

// return 0;
// }


// #include<stdio.h>
// int main()
// {
//    int i=100;
//   printf("reverse numbers from 0-100:\n");
  
//   while(i>=0)
//   {
//    printf("%d\n",i);
//   i=i-1;
//   }
// return 0;
// }



// #include<stdio.h>
// int main()
// {
//    int i=5;
//    printf("Enter the table of 5:\n");
//    while(i<=50)
//    {
//       printf("%d\n",i);
//       i=i+5;
//    }
// return 0;
// }


//Ex:-5

#include<stdio.h>
int main()
{
   int num,i=1;
   printf("Enter the number:\n");
   scanf("%d",&num);

   while(i<=10)
   {
      printf("%d * %d = %d\n",num,i,num*i);
      i++;
   }
   return 0;
}