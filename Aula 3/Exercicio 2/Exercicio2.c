/*2- Faça um programa em C que mostre a tabuada de qualquer número escolhido
pelo usuário (considerar tabuada do número 1 ao 10). */

#include <stdio.h>

main(void){
 int num,i,result;

    printf("%s","\tT A B U A D A \n\nDigite um numero de 1 a 10:\n");
    scanf("%d", &num);

    for(i=0;i<=10;i++){
      result= (num*i);

      printf("%d %s %d %s %d \n", num ," x " ,i," = ",result);
    }
}
