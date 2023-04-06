#include <stdio.h>
int main()
{
    int N[20];
    int n;
    int a;
    printf("ENTER THE TOTAL NUMBERS TO BE STORED. \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        //printf("ENTER THE Number : \n");
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (N[i] > N[j])
            {
                a = N[i];
                N[i] = N[j];
                N[j] = a;
            }
        }
    }
    printf("THE NUMBERS IN ASCENDING ORDER ARE \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d \t", N[i]);
    }

    return 0;
}
