#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{

    int opcao;

    int idade,dia,mes,ano;
    char dtnascimento[10],*ptrdt;
    int i;

    ptrdt= dtnascimento;

    dia = atoi(argv[1]);
    mes = atoi(argv[2]);
    ano = atoi(argv[3]);

    idade = 2022-ano;

    while(1>0){
    printf("Data de nascimento: %d/%d/%d\n\n",dia,mes,ano);


    printf("%s\n","Digite uma das opções abaixo:");
    printf("%s\n","1 - Digite nova data de nascimento.");
    printf("%s\n","2 - Verifique a condição para votação");
    printf("%s\n","3 - imprima na tela o ultimo mes inserido no formato texto.");
    printf("%s\n","4 - Encerre o programa");
    scanf("%d", &opcao);

   switch(opcao){
       case 1:
           printf("Digite nova data de nascimento");
           scanf("%s", ptrdt);

           printf("%s", dtnascimento);


           idade = 2022-ano;



                   // printf("A sua data de nascimento é:%d\\%d\\%d\nVocê tem: %d anos\n",dia,mes,ano,idade);



       break;

       case 2:
       printf("Verifique a condição para votação\n\n");

       if(idade<16){
                       printf("nao pode votar");
                   }
                   else if(idade>=16 && idade <18){
                       printf("voto facultativo\n");
                   }
                   else if (idade >18 && idade <70){
                       printf("voto obrigatorio\n");

                   }

                    else if (idade >= 70){
                        printf("voto facultativo\n");
                    }
       break;

       case 3:
       printf("imprima na tela o ultimo mes inserido no formato texto\n\n");
       break;

       case 4:
       printf("Encerrar o programa");
       exit(0);
        break;

        default:
        printf("opção invalida");
   }
    }

    return 0;
}
