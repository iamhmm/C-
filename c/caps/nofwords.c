#include <stdio.h>
#include <ctype.h>

int main()
{
    char paragraph[1000];
    int word_count = 0, i;

    printf("Enter a paragraph: ");
    fgets(paragraph, 1000, stdin); // read a line of text from user

    for (i = 0; paragraph[i] != '\0'; i++)
    {
         
        if (isspace(paragraph[i]) || paragraph[i] == '\n')     
        {
            word_count++;
        }
    }

    printf("Number of words: %d", word_count);

    return 0;
}

// if a space or a newline is encountered, increment word_count
         /*In the program for counting the number of words in a paragraph using C,
         the isspace() function is used to check if a character is whitespace
         (i.e., space, tab, newline, etc.) or not. It is a built-in function in
         the C standard library and is declared in the header file ctype.h.
         This line checks if the current character paragraph[i] is whitespace
         or not. If it is whitespace or if it is the null terminator character \0,

         increments the word count.*/


         /* In this program, we first read a paragraph from the user using fgets(), 
         which reads a line of text from stdin (the standard input stream) and stores 
         it in the character array paragraph. We then iterate over each character in 
         the array using a for loop, and check if the current character is a space or
         a newline character. If it is, we increment the word_count variable. Finally,
         we print the value of word_count as the output.*/