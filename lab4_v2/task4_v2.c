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
    // int digit;
    char currentchar;
    int *numbers = (long *)calloc(truesizeofstring/2, sizeof(long));

    for (size_t i = 0; i < truesizeofstring; i++){
        currentchar = str[i];
        printf("%c",currentchar);
        if (isdigit(currentchar)){
            strcat(tempstr, currentchar);
            printf("%s", tempstr);
        }
        else if(tempstr[0] == NULL){}
        else{
            numbers[currentnumber] = atoi(tempstr);
            currentnumber++;
            memset(tempstr,0,sizeof(tempstr));
        }
    }

    for (size_t i = 0;; i++)
    {
        if (numbers[i] == NULL){
            break;
        }
        printf("%d", numbers[i]);
    }

    if (amountofnums > 0){
        printf("Amount of dividable on 5 digits: %d", amountofnums);
    }else{
        printf("You have no numbers in string :(");
    }
    
    // free(numbers);
}