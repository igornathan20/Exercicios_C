/*1.Implementar uma função para adicionar (append) n caracteres iniciais de uma string2 para o final de uma string1.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char primeira[20];
    char segunda[20];


    printf("%s\n","qual a primeira palavra? ");
    scanf("%s", &primeira);

    printf("%s\n","qual a segunda palavra? ");
    scanf("%s", &segunda);

    strcat(primeira , segunda);

    printf("\n\n%s\n\n%s\n", "concatenadas ficam:", primeira);


    return 0;
}
