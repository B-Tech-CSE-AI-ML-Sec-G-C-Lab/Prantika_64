/*Count alphabets, digits, and special characters in a string*/

#include <stdio.h>
int main()
{
    char str[100];
    int i, alphabets = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
    }
    printf("Total alphabets = %d\n", alphabets);
    printf("Total digits = %d\n", digits);
    printf("Total special characters = %d\n", special);
    return 0;
}