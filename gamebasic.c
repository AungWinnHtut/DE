#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ux=0,uy=0;
    int dx=0,dy=0;
    char c;
    char ans;
    time_t t;
    srand((unsigned) time(&t));
    ux=rand()% 641;
    uy=rand() % 481;
    dx=rand()% 641;
    dy=rand() % 481;



    printf("your starting location (%d,%d)\n",ux,uy);
    printf("Please user UP DOWN LEFT and RIGHT arrow keys to move around \n");
    do{

        c=_getch();
        if(c=-32)
        {
            if(c==72)
        {
            uy--;
            if(uy<0)
            {
                uy=480;
            }
        }

         if(c==80)
        {
            uy++;
            if(uy>480)
            {
                uy=0;
            }
        }

        if(c==75)
        {
            ux--;
            if(ux<0)
            {
                ux=640;
            }
        }

        if(c==77)
        {
            ux++;
            if(ux>640)
            {
                ux=0;
            }
        }

        if(c==27)
        {
            printf("are you sure you want to exit ? (Y/N) ");
            scanf(" %c",&ans);
            if(ans=='y'||ans=='Y')
            {
                exit(0);
            }

        }



        }


        /*location*/
        printf("your new location is (%d,%d) \n",ux,uy);

        /*game checking */
        if(ux==dx && uy==dy)
        {
            printf("your level is up ! \n");
            return 0;
        }



    }while(c!=27);

    return 0;
}
