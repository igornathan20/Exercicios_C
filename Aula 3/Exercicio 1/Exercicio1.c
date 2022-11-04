/*1- Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao
ano, e um país B com 7000000 de habitantes e uma taxa de natalidade de 2% ao
ano, escrever um programa em C que seja capaz de calcular e mostrar o tempo
necessário para que a população do país A ultrapasse a população do país B.
(Utilize a estrutura while). */

#include <stdio.h>

main(void){
    int paisa = 5000000;
    int paisb = 7000000;
    int anos = 0;

    while(paisa < paisb){
        anos ++;
        paisa+= (paisa*0.03);
        paisb+= (paisb*0.02);

    }

  printf("%s %d %s \n \n","levara", anos,"anos");


}
