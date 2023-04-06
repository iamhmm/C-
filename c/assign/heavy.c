#include <stdio.h>
int main()
{
    int number_of_students;
    int heavy_weight;
    int n = 0;
    

    printf("ENTER THE NUMBER OF STUDENTS \n");
    scanf("%d", &number_of_students);

    int weights[number_of_students];
    int heavy_weights[number_of_students - 2];

    // TAKING INPUTS
    printf("Enter the weight of the students \n");
    for (int i = 0; i < number_of_students; i++)
    {
        printf("%d.", i + 1);
        scanf("%d", &weights[i]);
    }

    // CHECKING AND STORING THE WEIGHTS THAT ARE SUM OF PRECIOUS IN ARRAY (heavy_weights[number_of_students - 2])

    for (int i = 2; i < number_of_students; i++)
    {
        if (weights[i] == weights[i - 1] + weights[i - 2])
        {

            heavy_weights[n] = weights[i];
            printf("%d \t", heavy_weights[n]);
            n++;
        }
    }

    // CHECKING AND PRINTING THE HEAVY WEIGHT THAT IS SUM OF PREVIOUS TWO
    heavy_weight = heavy_weights[0];
    for (int i = 0; i < n; i++)
    {
        if (heavy_weight < heavy_weights[i])
        {
            heavy_weight = heavy_weights[i];
            
         }
         
    }
    if (n>1 || n==1)
    {
          printf(" \nTHE HEAVIEST PERSON THAT IS EQUAL TO THE SUM OF PREVIOUS TWO WEIGHTS IS %d ", heavy_weight);
    }
    else 
    {
        printf(" NO SUCH WEIGHTS FOUND SATISFYING THE CONDITION");
    }
    return 0;
}