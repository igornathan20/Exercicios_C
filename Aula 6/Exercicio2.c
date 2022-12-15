/*2.Implementar uma função para adicionar (append) a uma subcadeia da string2 para
uma string1. A substring é iniciada no índice determinado por n.*/

#include <stdio.h>
#include <string.h>


int main()
{
    char primeira[20]= "igor";
    char segunda[20]= "nathan";
    char sub[20];
    int n = 2;
    int i;
    int j = 0;


    printf("%s\n","Em qual posição deve iniciar a substring? ");
    scanf("%d", &n);


    for (i=n; i<=strlen(segunda);i++){
        sub[j] = segunda[i];
        j++;
    };

    strcat(primeira , sub);

    printf("%s\n\n%s\n", "concatenadas ficam:",primeira);


    return 0;
}

