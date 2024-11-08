#include <stdio.h>
#include <malloc.h>

// Длина наибольшей последовательности из одинаковых символов. Пример: dfxeee$$xxxx. -> 4

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

int main()
{
    int sizeofarray = 1024;
    char *str = (char *)calloc(sizeofarray, sizeof(char));
    int sentencesize;

    printf("Enter your cool string: ");

    if (fgets(str, sizeofarray - 1, stdin))
    {
        str[strcspn(str, "\n")] = 0;
        printf("Your sentence is \"%s\"\n", str);
        sentencesize = sizeofstring(str);
        // printf("Size of sentence is %d/n", sentencesize);
    }

    int consecutive = 1;
    int maxconsecutive = 0;

    for (size_t i = 0; i < sentencesize - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            consecutive++;
        }
        else
        {
            consecutive = 1;
        }

        if (consecutive > maxconsecutive)
        {
            maxconsecutive = consecutive;
        }
    }

    printf("Maximum number of consecutive characters: %d", maxconsecutive);
    free(str);
}