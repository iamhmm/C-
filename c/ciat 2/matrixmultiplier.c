#include <stdio.h>
int main()
{
  int r_mat1;
  int c_mat1;
  int r_mat2;
  int c_mat2;

  printf("ENTER THE NO. OF ROWS AND COLUMNS FOR MATRIX 1 :  ");
  scanf("%d%d", &r_mat1, &c_mat1);
  printf("ENTER THE NO. OF ROWS AND COLUMNS FOR MATRIX 2 :  ");
  scanf("%d%d", &r_mat2, &c_mat2);
  int mat1[r_mat1][c_mat1];
  int mat2[r_mat2][c_mat2];
  int mat3[r_mat1][c_mat2];

  if (r_mat1 == c_mat2)
  {
    printf("\n ENTER THE ELEMENTS FOR MATRIX 1 : \n");
    for (int i = 0; i < r_mat1; i++)
    {
      for (int j = 0; j < c_mat1; j++)
      {
        printf("ENTER ELEMENT  :  \n ", i, j);
        scanf("%d", &mat1[i][j]);
      }
    }

    printf("\n ENTER THE ELEMENTS FOR MATRIX 2 : ");

    for (int i = 0; i < r_mat2; i++)
    {
      for (int j = 0; j < c_mat2; j++)
      {
        printf("ENTER ELEMENT  :  \n ", i, j);
        scanf("%d", &mat2[i][j]);
      }
    }
  }
  for (int i = 0; i < r_mat1; i++)
  {
    for (int j = 0; j < c_mat2; i++)
    {
      for (int k = 0; k < c_mat2; k++)
      {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  for (int i = 0; i < r_mat1; i++)
  {

    for (int j = 0; j < c_mat2; j++)
    {
      printf("the matrix is  :  \n %d\t ", mat3[i][j]);
    }
    printf("\n");
  }
  return 0;
}