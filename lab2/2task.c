#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[]  = "h%347dfe3fer3.";
    printf("Enter your cool string: ");
    scanf("%s", str);
    printf("%s\n", str);
    int j;
    int digitsamount = 0;
    int numbersamount = 0;
    unsigned long strsize = sizeof(str) -1;
    for (size_t i = 0; i < strsize; i++)
    {
        //printf("\n%c", str[i]); //debug thing
        if (!isdigit(str[i]))
        {
            //printf(" is NOT digit"); //debug thing
            continue;
        }
        j = i;
        digitsamount++;
        while (j + 1 <= strsize && isdigit(str[j+1]))
        {
            numbersamount++;
            j++;
        }
    }
    printf("Amount of digits is: %d and numbers is: %d", digitsamount, numbersamount);
}