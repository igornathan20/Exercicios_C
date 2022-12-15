#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int areaper(float l,float *ptrarea, float *ptrper){
    *ptrper = l*6;
    *ptrarea = (3* pow(l,2) * (sqrt(3)))/2;
}

int main()
{
    float l, perimetro, area;
    float *ptrarea, *ptrper;

    ptrarea = &area;
    ptrper = &perimetro;

    printf("    H E X A G O N O");
    printf("\nQual o lado do hexágono?\n");
    scanf("%f", &l);

    if(l<0){ exit(0); };

 areaper(l,ptrarea,ptrper);

    printf("%s%f\n","A area do hexagono é: ", area);
    printf("%s%f\n","O perimetro do hexagono é: ", perimetro);
    return 0;
}
