#include <stdio.h>
int sum(int, int); // FUNCTION DECLERATION
int main()
{
    int x = 4;
    int y = 6;
    int result_sum ; 
    result_sum = sum(x, y); // GETTING VALUE FROM THE RETURNED VALUE  ALSO CALLINF FUNCTION
    
    printf(" \n \n sum =%d ", result_sum );
    printf(" \n values before  calsulation  x= %d , y= %d \n ", x, y);
    return 0;
}





int  sum(int a , int b)  // DEFINING FUNCTION  here the a and b are accessing x and y from the main
{

    a = 100;
    b = 200;
    int add;
    // int a = 100;
    // int b = 200;
    add = a+b;
    printf(" the sum is %d ", add);
    printf(" \n the values for calcultion were x = %d , y = %d", a , b);
    return add; // RETURNING VALUE TO THE result_sum 
}