#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// Количество чисел, делящихся на 5. Пример: 53x70#455. -> 3

int sizeofstring(char *array)
{
    int size = 0;

    for (size_t i = 0;; i++){
        if (array[i] == 0){
            return size;
        }
        size++;
    }
}

int cum(){
    printf("sperm joke");
    return 0;
}

#define stringsize 1024

int main()
{
    char str[stringsize];
    char tempstr[stringsize];
    int amountofnums = 0;

    printf("Enter your cool string: ");
    if (!fgets(str, 1024, stdin)){
        return 1;
    }
    int truesizeofstring = sizeofstring(str);
    int currentnumber = 0;
    int digit;
    
    for (size_t i = 0; i < truesizeofstring; i++){
        if (isdigit(str[i])){
            digit = str[i] - '0';
            if (digit % 5 == 0){
                amountofnums++;
            }
        }
    }

    if (amountofnums > 0){
        printf("Amount of dividable on 5 digits: %d", amountofnums);
    }else{
        printf("You have no numbers in string :(");
    }
    
    // free(numbers);
}