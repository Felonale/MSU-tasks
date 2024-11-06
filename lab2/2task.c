#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    //char str[]  = "h%347dfe3fer3.";
    int size = 1024;
    char *str = (char*)calloc(size, sizeof(char));
    // printf("%d", sizeof(str[0]));
    int quantityofoccur = 0;

    int occursize = 8;
    int *occur = (int*)calloc(occursize, sizeof(int));
    int *occurtemp;
    printf("%d", sizeof(occur));
    printf("Enter your cool string: ");

    if (fgets(str, size, stdin))
    {
        str[strcspn(str, "\n")] = 0;
        printf("Your sentence is \"%s\"\n", str);
    }
    
    printf("First letter is \"%c\"\n", str[0]);
    
    for (size_t i = 0; i < size; i++)
    {
        if (str[i] == str[0])
        {
            if (quantityofoccur == 8)
            {
                occursize+=8;
                occurtemp = occur;
                occur = (int*)calloc(occursize, sizeof(int));
                for (size_t z = 0; z < occursize-8; z++)
                {
                    occur[z] = occurtemp[z];
                }
                free(occurtemp);
            }
            
            occur[quantityofoccur] = i+1;
            quantityofoccur++;
        }
    }
    
    printf("Amount of first letter\'s occurances: %d\n", quantityofoccur);
    printf("First letter's occurances are in those places:");
    for (size_t i = 0; i < quantityofoccur; i++)
    {
        printf(" %d", occur[i]);
    }
    
    free(occur);
    free(str);
}