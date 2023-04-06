#include <stdio.h>
#include<math.h>
int main()
{
  float A[2][4];
  float B[3][4];
  float BMI [1] [4];
  // height as row and column as weight-
  printf("enter the height and weight of students ");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      scanf("%f", &A[i][j]);
    }
  }
  // PRINTING THE GIVEN DATA
  printf(" the given height and weights are \n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%f \t", A[i][j]);
    }
    printf("\n");
  }
printf(" the BMI is \n"); 
  for (int i = 0; i < 1; i++)
  {
    for (int k = 1; k < 2; k++)
    {
      for (int j = 0; j < 4; j++)
      {
        BMI [i] [j] = (A[k] [j] / pow (A[i][j] , 2) );
       // printf(" the BMI is \n");
        printf("%f \t ",  BMI [i] [j]) ;
      }
      printf("\n");
    }
  }
// PRINTING ALL THE INPUTS AND OUTPUTS AS A MATRIX
printf(" \n \n the index is : height as 1st row , weight as 2nd row , and BMI as 3rd row \n \n" );

   for (int i =0 ; i<2; i++)
     {
      for(int j=0 ;j<4 ; j++)
      {
        B[i][j]=A[i][j];
        printf("%f \t",B[i][j]);
      }
      printf("\n");
     }

      for (int k =2 ; k<3; k++)
     {
      for(int j=0 ;j<4 ; j++)
      {
        B[k][j]=BMI[k-2][j];
        printf("%f\t",B[k][j]);
      }

     }
     
  return 0;
}