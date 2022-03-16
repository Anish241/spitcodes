#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    int m=n/2;
    printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=m;j++)
    {
        swap(&arr[j],&arr[n-j-1]);
    }
    printf("The reversed array is: \n");
    for(int k=0;k<n;k++)
    {
        printf("%d, ",arr[k]);
    }
    return 0;
}
