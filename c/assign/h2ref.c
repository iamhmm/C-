#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF STUDENTS \n");
    scanf("%d", &n);
    int weights[n];
    int heavy;
    printf("Enter the weight of the students \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d.", i + 1);
        scanf("%d", &weights[i]);
    }

for (int i = 2; i<n ; i++)
{
    if (weights[i]== weights [i-2] +weights[i-1] )
    {
         heavy= weights [i];
    }
}
printf(" the heavy weight is %d ", heavy);
    return 0;
}