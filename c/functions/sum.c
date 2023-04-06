#include <stdio.h>
int sum(int a, int b); // function prototyping keeping parameters to get input and return an output as an integer
int main()
{
    int result;
    result = sum(1, 1);              // function call here a and b are argument
    printf("the sum is %d ", result); // result is assigned from c

    return 0;
}

int sum(int a, int b) // here a and b are parameters
{
    a = 10; // misnomer
    printf("enter the value for  a and b \n");
    scanf("%d%d", &a, &b);
    int c;
    c = a + b;
    return c;
}
/* the the value assigned in function
call and definition is totallly indpendent
and the value in the function call is returned from
the function definition*/