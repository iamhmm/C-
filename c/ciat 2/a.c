#include <stdio.h>
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];

    printf("\n ENTER THE ELEMENTS FOR MATRIX 1 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n ENTER THE ELEMENTS FOR MATRIX 2 : ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &mat2[i][j]);
        }
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("the matrix is  :\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}