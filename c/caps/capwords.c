#include <stdio.h>
#include <ctype.h>

int main()
{
    char paragraph[1000];
    fgets(paragraph, 1000, stdin);

    int i = 0;
    while (paragraph[i] != '\0')
    {
        if (i == 0 || isspace(paragraph[i-1]))
        {
            paragraph[i] = toupper(paragraph[i]);
        }
        i++;
    }

    printf("Capitalized Paragraph:\n%s", paragraph);
    return 0;
}
