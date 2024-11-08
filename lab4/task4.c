#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// Количество чисел, делящихся на 5. Пример: 53x70#455. -> 3

int sizeofstring(char *array)
{
    int size = 0;

    for (size_t i = 0;; i++)
    {

        if (array[i] == 0)
        {
            return size;
        }
        size++;
    }
}

#define stringsize 1024

int main()
{
    char str[stringsize];
    int amountofnums = 0;

    printf("Enter your cool string: ");
    if (!fgets(str, 1024, stdin))
    {
        return 1;
    }
    int truesizeofstring = sizeofstring(str);
    char currentchar = 0;

    for (size_t i = 0; i < truesizeofstring; i++)
    {
        currentchar = str[i];
        if (isdigit(currentchar))
        {
            continue;
        }
        if (atoi(currentchar) % 5 == 0)
        {
            amountofnums++;
        }
    }
}