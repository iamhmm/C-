#include <stdio.h>
int main()
{
    int N[20];
    int n;
    printf("ENTER THE TOTAL NUMBERS TO BE STORED. \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
            printf("ENTER THE Number : \n");
            scanf("%d",&N[i]);
    }
    return 0;
}
