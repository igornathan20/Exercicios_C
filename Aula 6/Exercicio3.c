/*Implementar uma função para comparar uma substring da string2 com os n2 primeiros caracteres
de string1. A substring é determinada pelo índice n1 com tamanho dado por n2.*/

#include <stdio.h>
#include <string.h>


int main()
{
    char primeira[20]= "igor";
    char segunda[20]= "igor";
    char sub[20];
    int n1,n2;
    int i,r;
    int j = 0;


    printf("%s\n","Em qual posição deve iniciar a substring? ");
    scanf("%d", &n1);

    printf("%s\n","Qual o tamanho da substring? ");
    scanf("%d", &n2);



    for (i=n1; i<=strlen(segunda);i++){
        sub[j] = segunda[i];
        j++;
    };

    r=strncmp(primeira, sub, n2);

    printf("%s\n\n%d\n", "A comparaço retorna",r);


    return 0;
}

