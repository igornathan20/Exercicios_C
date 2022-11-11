#include <stdio.h>

int main (void){
 int pedro, joana, diferenca;


 printf("\t %s \n \n","QUEM É O MAIS VELHO:");
 printf("%s","Digite a idade de Pedro : ");
 scanf("%d", &pedro);


 printf("\n \n %s","Digite a idade da Joana : ");
 scanf("%d", &joana);

 if (pedro!=joana){

     if (pedro>joana){

         diferenca = (pedro - joana);

         printf("\n \n %s %d %s","Pedro é ", diferenca ,"anos mais velho que Joana");


     }

     else {
         diferenca = (joana - pedro);

         printf("\n \n %s %d %s","Joana é ", diferenca ," anos mais velho que Pedro");

     }


 }
 else {

    printf("OBS: As Idades devem ser diferentes! ");
 }


}
