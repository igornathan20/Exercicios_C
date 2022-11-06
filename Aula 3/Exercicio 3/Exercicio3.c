/* 3- Uma loja utiliza o código V para compras à vista e o código P para compras à
prazo. Faça um algoritmo que receba o código de e o valor de 15 transações.
Calcule e mostre:
• O valor total das compras à vista
• O valor total das compras a prazo
• O valor total das compras efetuadas */

#include <stdio.h>


main(void){
  char forma;
  float parcelado;
  float avista;
  float valor;
  float total;
  int i=1;


  while(i<=15){
        printf("%s %d \n \n","compra:",i);
        printf("%s \n %s \n %s \n \n","qual a forma de pagamento?","A vista(V)","Parcelado(P)");
        scanf("%s", &forma);

        forma= toupper(forma);

        if(forma == 'V'){
            printf("%s \n \n","digite o valor a vista");
            scanf("%f", &valor);

            avista = (avista + valor);


        }
        else if(forma == 'P'){
            printf("%s \n \n","digite o valor que sera parcelado");
            scanf("%f", &valor);

            parcelado=(parcelado + valor);

        }

        total = (avista + parcelado);

        i++;






}

        printf("\n%s %5.2f \n","O valor total das compras a vista: R$", avista);
        printf("%s %5.2f \n","O valor total das compras a prazo: R$", parcelado);
        printf("%s %5.2f \n","O valor total da compra:           R$", total);



}
