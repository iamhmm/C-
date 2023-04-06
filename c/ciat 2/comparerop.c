#include<stdio.h>
#include<string.h>
#include<string.h>
int main ()
{
char name1[50];
char name2[50];
int value;
printf("ENTER NAME 1 AND 2 : ");
scanf("%s%s",&name1,&name2);
// comaparing using library functons
 value = strcmp(name1,name2);
if(value==0)
{
    printf("\nSAME");
}
else 
printf("\n NOT SAME");
return 0; 
}