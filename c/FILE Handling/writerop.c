#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void main()
{
    FILE *fp;
    fp = fopen("writerop.txt", "w");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }

    int n = 1;
    char name[100];
    char a = 'b';
    char paragraph[1000];
    char b;
    printf("\n ENTER THE PARAGRAPH :   ");
    fgets(paragraph, 1000, stdin);
    printf(" \n ENTER AN CHARACTER:  ");
    scanf("%c", &b);
    printf(" \nENTER YOUR NAME : ");
    scanf("%s", &name);

    fprintf(fp, "%d.\n%c\n%c\n%s\n%s", n, a, b, name, paragraph);
    // fprintf(fp, "\n\n \t\t\t");
    fputc('a', fp);
    // fputc( "a",fp);
    // fputc("b",fp);
    // fputs(name,fp);
    // fputs(paragraph,fp);

    fclose(fp);
}
