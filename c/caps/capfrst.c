#include <stdio.h>
#include <ctype.h>

int main()
{
    char paragraph[1000];
    printf("Enter a paragraph:\n");
    fgets(paragraph, 1000, stdin);

    int i = 0;
    while (paragraph[i] != '\0')
    {
        if (i == 0 /*|| isspace(paragraph[i-1])*/)
        { // capitalize first letter of sentence
            paragraph[i] = toupper(paragraph[i]);
        }
        if (paragraph[i] == '.')
        {        // end of sentence
            i++; // skip past period
            while (isspace(paragraph[i]))
            { // skip any whitespace after period
                i++;
            }
            
            if (paragraph[i] != '\0')
            { // capitalize first letter of next sentence
             printf("%d",i);
                paragraph[i] = toupper(paragraph[i]);
            }
        }
        i++;
    }

    printf("\nCapitalized paragraph:\n%s", paragraph);

    return 0;
}
