#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[] = "Test string kekw";
    char del[] = " ";
    char *token = strtok(str, del);

    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, del);
    }
    
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     /* code */
//     return 0;
// }
