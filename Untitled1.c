//#include <stdio.h>
//
//void bubblesort()
//{
//    int n;
//    printf("Enter the number of elements: ");
//    scanf("%d", &n);
//    int a[n];
//    printf("Enter %d elements:\n", n);
//    for (int i = 0; i < n; i++)
//        {
//        scanf("%d", &a[i]);
//        }
//    for (int i = 0; i < n - 1; i++)
//        {
//          for (int j = 0; j < n - i - 1; j++)
//          {
//            if (a[j] > a[j + 1])
//            {
//                int temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//          }
//        }
//}
//
//void printarray(double a[],int size)
//{
//    int i;
//    for(i=0;i<size;i++)
//    {
//        printf("%.2lf",a[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//double a[] ={64.3,34.2,25.4};
//int n = sizeof(a)/sizeof(a[0]);
//printf("unsorted array \n");
//printarray(a ,n);
//printf("sorted array \n");
//bubblesort(a,n);
//}
//
