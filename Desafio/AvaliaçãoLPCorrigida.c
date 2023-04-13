//Tarefa de avaliacao com entrada de dados(data)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirMes(int *Mes) { 
    switch(*Mes) {
        case 1:           
        printf("Janeiro\n\n"); 
        break;        
        case 2:         
        printf("Fevereiro\n\n");   
        break;       
        case 3:       
        printf("Março\n\n");    
        break;      
        case 4:       
        printf("Abril\n\n");   
        break;      
        case 5:        
        printf("Maio\n\n");   
        break;       
        case 6:        
        printf("Junho\n\n");  
        break;    
        case 7:   
        printf("Julho\n\n"); 
        break;       
        case 8:      
        printf("Agosto\n\n");   
        break;        
        case 9:        
        printf("Setembro\n\n"); 
        break;      
        case 10:      
        printf("Outubro\n\n"); 
        break;      
        case 11:       
        printf("Novembro\n\n");    
        break;       
        case 12:      
        printf("Dezembro\n\n"); 
        break;    
        default:     
        printf("Mês inválido\n\n");  
        }}



int main(int argc, char *argv[])
{
    
    int opcao;
    
    int idade,dia,mes,ano;
    char dtnascimento[8];
    int i;
    
   
  
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
           scanf("%d%d%d",&dia,&mes,&ano);
           idade = 2022-ano;
               
                    
                    
                    printf("A sua data de nascimento é:%d\\%d\\%d\nVocê tem: %d anos\n\n",dia,mes,ano,idade);
                    
                    
                    
       break;
       
       case 2:
       printf("Verifique a condição para votação\n\n");
       
       if(idade<16){
                       printf("nao pode votar\n");
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
       imprimirMes(&mes);
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