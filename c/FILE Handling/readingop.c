#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    FILE *fp;
    fp = fopen("writerop.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    // fputc('a',fp);
    char words;
    char hello[10];
    // while (!feof(fp))
    // {
    //     words = fgetc(fp);
    //     printf("%c", words);
    // }
    while (!feof(fp))
    {
        fgets(hello, 7, fp);
        printf("%s", hello);
    }
 
    fclose(fp);
}