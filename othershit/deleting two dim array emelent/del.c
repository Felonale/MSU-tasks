#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

// Creating arrays

int *createOneDimArray(int size)
{
    int *x = (int *)malloc(size * sizeof(int *));
    // printf("x place is %d\n", (int)x);
    return x;
}

int *createTwoDimArray(int sizeA, int sizeB)
{
    int **x = (int **)malloc(sizeA * sizeof(int *));
    // printf("x place is %d\n", (int)x);
    for (size_t i = 0; i < sizeA; i++)
    {
        x[i] = (int **)malloc(sizeB * sizeof(int *));
    }
    
    return x;
}



// Fill arrays

int randomFillOneDimArray(int *array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % 2;
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

int *removeArrayElementTD(int *array, int size)
{
    int *tmp;
    bool iszero = true;
    int zeros = 0;
    while (iszero == true)
    {
        iszero = false;
        for (size_t i = 1; i < size; i++)
        {
            // printf("%d ", array[i]);
            if (array[i-1] == 0)
            {
                zeros++;
                iszero = true;
                for (size_t j = i; j < size; j++)
                {
                    array[j-1] = array[j];
                }
                size--;
            }
        }
    }
    
        tmp = realloc(array, (size) * sizeof(int));
        // printf("Freeint array\n");
        // free(array);
        array = tmp;
        // printf("Freeint tmp\n");
        // free(tmp);
        // printf("array place in raetd is %d\n", (int)array);
        printOneDimArray(array, size);
    return array;
}


//main part

int main()
{
    srand(time(NULL));
    int n,m;
    printf("Enter array\'s first dimension length (n): ");
    scanf("%d", &n);
    printf("Enter array\'s second dimension length (m): ");
    scanf("%d", &m);

    int **array = createTwoDimArray();
}

// int main()
// {
//     srand(time(NULL));
//     int n;
//     printf("Enter array\'s first dimension length (n): ");
//     scanf("%d", &n);
    
//     int *array = createOneDimArray(n);
//     // printf("array place is %d\n", (int)array);
//     randomFillOneDimArray(array, n);
    
//     array = removeArrayElementTD(array, n);
//     // printf("array place is %d\n", (int)array);
//     free(array);
//     return (0);
// }