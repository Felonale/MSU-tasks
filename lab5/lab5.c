#include <stdio.h>
#include <string.h>
#include <malloc.h>

// Заменить каждую латинскую букву на её номер в алфавите. Пример: a&zC,D. -> 1&263,4

int insertChar (char* text, char c, int position){
    int len = strlen(text);

    return 0;
}

int main(){
    // char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char *text = (char*)calloc(1024, sizeof(char));
    printf("%c", 'a');
    
    // strcpy(text, "anukanuka");


    // memmove(text+1, "", 1);
    // memset();


    // strcpy(text, "test");
    // strcat(text, "anukanuka");

    // printf("%d", strlen(text));
    printf("%s", text);

    free(text);
    return 0;
}