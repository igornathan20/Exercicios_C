#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main()
{
int a[10][10];
int b[10][10];
int x,y,t;

    for (t=1; t!=0;t++){



        for(x= 0;x<10; x++){
            for(y=0; y<10; y++){

                a[x][y] = rand() %2;
                b[x][y] = rand() %2;

             }
        }

        printf("%s %d \n\n","montagen randômica:",t);
        for(x= 0;x<10 ;x++){
            for(y=0; y<10 ; y++){

                if((a[x][y]) == (b[x][y])){
                    printf("%s %d %s %d %s %d \n","matriz a e b [",x,"][",y,"] são iguais a: ", b[x][y] );
                }

                else {

                    printf("%s \n","- ");


                };

            }

        }

     sleep(5);
     system("clear");


    }

return 0;
}
