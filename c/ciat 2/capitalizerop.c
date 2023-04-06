#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
char paragraph [1000];
int len;

printf("ENTER AN PARAGRAPG : \n ");
fgets(paragraph,1000,stdin);
len=strlen(paragraph);
int i = 0 ;
while(i<len)
{
    if(i==0 || isspace(paragraph[i-1]))
    {
        paragraph[i]=toupper(paragraph[i]);
    }
i++;
}
printf("CAPITALISED PARAGRAPH IS :  \n %s",paragraph);
return 0;
}