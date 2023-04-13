#include <stdio.h>
#include <stdlib.h>

FILE *Arquivo;

int main(int argc, char *argv[])
{
    Arquivo=fopen("saida.txt","wt");
    if(Arquivo == NULL) exit(0);
    
    fprintf(Arquivo,"\n Hello World! \n");
    
    fclose(Arquivo);
    system("PAUSE");
    
    return 0;
}