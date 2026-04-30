#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void replaceLetters(string a);

// To make the user input a key
int main(int argc, string argv[])
{
    // to force the user to use a key with 26 letters
    if (argc != 2 )
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    // to count the length of the letters
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 2;
    }
    //getting the message we need to ecrypt
    string userInput;
    userInput = get_string("plaintest: ");
}

void replaceLetters(string a)
{
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        char c = a[i];
    }
}