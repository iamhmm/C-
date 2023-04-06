#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    FILE *fp;
    fp = fopen("writerop.txt", "a");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
char append[100];
printf("ENTER YOUR CONTENT THAT YOU WANT TO APPEND : ");
fgets(append, 100 , stdin);

// fputs(append,fp);
fprintf(fp,"\n %s",append);

printf(" appendedsucessfuly");
    fclose(fp);
}