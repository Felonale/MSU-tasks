#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

int *createOneDimArray(int size)
{
    int *x = (int *)malloc(size * sizeof(int *));
    return x;
}

int randomFillOneDimArray(int *array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
    }
    printOneDimArray(array, size);
    return 0;
}

int printOneDimArray(int *array, int size)
{
    printf("[");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size-1)
        {
            printf(", ");
        }
        
    }
    printf("]\n");
    return 0;
}

int removeArrayElementTD(int *array, int size)
{
    int *tmp;
    int zeros = 0;
    for (size_t i = 1; i < size; i++)
    {
        if (array[i-1] == 0)
        {
            zeros++;
            for (size_t j = i; j < size; j++)
            {
                array[j-1] = array[j];
            }
            
        }
    }
        size -= zeros;
        tmp = realloc(array, (size) * sizeof(int));
        array = tmp;
        printOneDimArray(array, size);
    return 0;
}


//main part

int main()
{
    srand(time(NULL));
    int n;
    printf("Enter array\'s first dimension length (n): ");
    scanf("%d", &n);
    
    int *array = createOneDimArray(n);
    randomFillOneDimArray(array, n);
    
    removeArrayElementTD(array, n);
    free(array);
    return (0);
}