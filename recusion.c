//#include<stdio.h>
//int add(int n)
//{
//  if (n<=0)
//    return 0;
//  else
//    return n+add(n-1);
//}
//int main()
//{
//  printf("Sum = %d", add(5));
//}

//#include<stdio.h>
//int add(int n)
//{
//  if (n<=0)
//    {
//      return 0;
//    }
//  if ((n%10 == 3)||(n%10 == 5)||(n%10 == 7))
//    {
//      return add(n-1);
//    }
//  return n+add(n-1);
//}
//
//int main()
//{
//  printf("Sum = %d", add(100));
//}

#include<stdio.h>
int main()
{
     printf("Sum = %d", add(100));
}
int add(int n)
{
    if(n<=0)
       {
           return 0;
       }
    if(n%n ==0 )
       {
         return add(n-1);
       }
    return n+add(n-1);
}

