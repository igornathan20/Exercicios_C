#include <stdio.h>
#include <math.h>



int deltac(float a, float b, float c) {  //calculo do delta
    return b * b -4 * a * c;
}

int raiz1(float a,float b, float delta, float *ptrx1){ //calculo da raiz 1
    return *ptrx1 = (-b+ sqrt(delta))/2*a;
}


int raiz2(float a,float b, float delta, float *ptrx2){ //calculo da raiz 2
    return *ptrx2 = (-b- sqrt(delta))/2*a;
}


int main()
{
    float a,b,c;
    float delta,x1,x2;
    float *ptrx1, *ptrx2;


    ptrx1= &x1;
    ptrx2= &x2;

        printf("f(x)= Ax²+ Bx + C \n");

        printf("Digite o valor de A :\n");
        scanf("%f",&a);

        printf("Digite o valor de B :\n");
        scanf("%f",&b);

        printf("Digite o valor de C :\n");
        scanf("%f",&c);


    delta = deltac(a,b,c);  //calculo do delta
    raiz1(a,b,delta,ptrx1); //calculo da raiz 1
    raiz2(a,b,delta,ptrx2); //calculo da raiz 2

        if (delta < 0){
            printf("Não existe raiz");}

        else if (delta==0) {
            printf("A equação só tem uma raiz: \n%0.2f\n", x1);
          }

        else {

          printf("As raizes da equação são: \n%0.2f\n%0.2f", x1,x2);
        }

        return 0;
}
