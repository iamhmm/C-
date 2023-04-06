#include <stdio.h>
int main()
{
    float eng_cut_off;
    float med_cut_off;
    char field;
    float Physics, Chemistry, Maths, Biology;
    printf(" ENTER YOUR FIELD OF STUDY (E or M)? :  \n ");
    scanf("%s", &field);
    if (field == 'e' || field == 'E')
    {
        printf(" ENTER YOUR PHYSICS MARKS : \n ");
        scanf("%f", &Physics);
        printf(" ENTER YOUR Chemistry MARKS : \n ");
        scanf("%f", &Chemistry);
        printf(" ENTER YOUR Maths MARKS : \n ");
        scanf("%f", &Maths);
        eng_cut_off = (Physics + Chemistry + Maths )/3;
        printf(" The ENGINEERING cut off is %.2f ", eng_cut_off);
    }
     else if (field == 'm' || field == 'M')
    {
        printf(" ENTER YOUR PHYSICS MARKS : \n ");
        scanf("%f", &Physics);
        printf(" ENTER YOUR Chemistry MARKS : \n ");
        scanf("%f", &Chemistry);
        printf(" ENTER YOUR Biology MARKS : \n ");
        scanf("%f", &Biology);
        med_cut_off = (Physics + Chemistry + Biology )/3;
        printf(" The ENGINEERING cut off is %.2f ", med_cut_off);
    }
else 

{
    printf(" INVALID ");
}
    return 0;
}