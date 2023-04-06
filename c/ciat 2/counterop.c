#include <stdio.h>
#include<ctype.h>
int main()
{
    char paragraph[1000];
    int count=0;
    printf("ENTER A PARAGRAPH : ");
    fgets(paragraph, 1000, stdin);
    for (int i = 0; paragraph[i] != '\0'; i++)

    {
        if (isspace(paragraph[i]))
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}