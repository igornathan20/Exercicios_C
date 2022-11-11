#include <stdio.h>


int main(void){
 float fahrenheit, celsius;

 printf("\t %s \n \n","CONVERSOR DE TEMPERATURAS");
 printf("%s","Digite a temperatura em graus Fahrenheit: ");
 scanf("%f", &fahrenheit);

 celsius= ((fahrenheit-32)/1.8);





    printf("%0.2f %s", celsius,"° C");



}
