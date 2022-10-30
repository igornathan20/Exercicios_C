/*3- Faça um programa que apresente os números de 1 a 10, sendo que cada número
deve ser impresso em uma linha e os números ímpares deslocados (\t) a direita.*/

#include <stdio.h>

int main()
{
    int i,resto;
    for(i=1;i<=10;i++){
        resto=i%2;
        if (resto == 0){
            printf("\n %d",i);}
        else{
            printf("\n \t %d",i);

    }
}
}
