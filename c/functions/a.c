#include <stdio.h>
     void    goodmorning();                //function prototype                        
     void    goodafternoon();              //function prototype    
     void    goodnight();                  //function prototype
int main()
{
    goodmorning();                         // function call
    goodafternoon();                       // function call
    goodnight();                           // function call
    
    return 0;
}
void goodmorning ()                       //function decleration
    {
        printf(" good morning \n");
    }
     void goodafternoon ()                //function decleration
    {
        printf(" goodafternoon\n");
    }
     void goodnight ()                    //function decleration
    {
        printf(" goodnight\n");
    }