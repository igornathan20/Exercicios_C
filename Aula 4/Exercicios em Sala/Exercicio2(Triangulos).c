#include <stdio.h>
int main (void){
    int a, b, c;


    printf("Digite o tamanho do primeiro lado do triângulo");
    scanf("%d",&a);

    printf("Digite o tamanho do segundo lado do triângulo");
    scanf("%d",&b);

    printf("Digite o tamanho do terceiro lado do triângulo");
    scanf("%d",&c);




    if (a == b && b == c){

    printf("equilatero: %d %d %d\n",a , b, c);

    }

    else if(a == b && a != c || b == c && b!=a || a == c && a!= b){
        printf("isoceles: %d %d %d\n",a , b, c);

    }
    else {
        printf("escaleno: %d %d %d\n",a , b, c);
    }



    return(0);

}
