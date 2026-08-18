/*Replace each lowercase letter with the same uppercase letter */

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Newly created string = %s", str);
    return 0;
}