#include<stdio.h>
int sub(int*a,int*b)
{
    int c=*a-*b;
    return c;
}

int main()
{ int rows,cols;
  printf("Enter the number of rows: \n");
  scanf("%d",&rows);
  printf("Enter the number of cols: \n");
  scanf("%d",&cols);
  int mat1[rows][cols],mat2[rows][cols],submat[rows][cols];
  printf("Enter the elements of first matrix: \n");
  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<cols;j++)
      {   
          scanf("%d",&mat1[i][j]);
      }
  }
  
  printf("Enter the elements of second matrix: \n");
  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<cols;j++)
      {   
          scanf("%d",&mat2[i][j]);
      }
  }
  
  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<cols;j++)
      {   
          submat[i][j]=sub(&mat1[i][j],&mat2[i][j]);
          
      }
  }
  printf("The subtracted matrix is: \n");
  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<cols;j++)
      {   
          printf("%d ",submat[i][j]);
      }printf("\n");
  }
  
  
  
    return 0;
}
