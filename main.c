#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Введи имя: ");
    fgets(first, 200, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */
    
    printf("А теперь фамилию: "); 
    gets(last);  /* buffer overflow? what's that? */
    
    printf("Привет &s &s!\n", first, last);
    return 0;
}
