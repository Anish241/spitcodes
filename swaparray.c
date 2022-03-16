#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{ int n;
  printf("Enter the size of array: \n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of array: \n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
      
  }
 
 
 for(int j=0;j<n;j++)
 {
     for(int k=0;k<n-j-1;k++)
     {
         if(arr[k]>arr[k+1])
         {
             swap(&arr[k],&arr[k+1]);
         }
     }
 }
 
 swap(&arr[0],&arr[n-1]);
 printf("The array with samllest and largest element swapped is: \n");
 
 for(int m=0;m<n;m++)
 {
     printf("%d, ",arr[m]);
 }
    
    
    
    return 0;
}
