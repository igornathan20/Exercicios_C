#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main()
{
int a[10][10];
int b[10][10];
int x,y,t;

    for(t=1; t!=0; t++){

       printf("     %s%d\n\n","Montagen Randômica: ", t);


        for(x= 0;x<10; x++){
            for(y=0; y<10; y++){

                a[x][y] = rand() %2;
                b[x][y] = rand() %2;

             }
        }


        for(x= 0;x<10 ;x++){
            for(y=0; y<10 ; y++){


                if((a[x][y]) == (b[x][y])){
                    printf("%s%d%s"," ",b[x][y]," ");
                }

                else {

                    printf("%s"," - ");


                };

            }
           printf("\n");

        }

        sleep(5);
        system("clear");


    }

return 0;
}
