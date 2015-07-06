#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Myan,Eng,Maths,Chem,Phys,Bio;
    do{
            printf("Enter The Value Of Myan:  \n");
            scanf("%d",&Myan);
            if(Myan<0&&Myan>40)
            {
                printf("Fail!\n");
            }
            if(Myan>=40&&Myan<80)
            {
                printf("Pass!\n");
            }
            if(Myan>=80&&Myan<100)
            {
                printf("Distination\n");
            }
            if(Myan>100)
            {
                printf("ERROR\n");
            }
            printf("Enter The Value of Eng :  \n");
            scanf("%d",&Eng);
            if(Eng<0&&Eng>40)
            {
                printf("Fail!\n");
            }
            if(Eng>=40&&Eng<80)
            {
                printf("Pass!\n");
            }
            if(Eng>=80&&Eng<100)
            {
                printf("Distination\n");
            }
            if(Eng>100)
            {
                printf("ERROR\n");
            }
            }while(Myan,Eng>=0);

    return 0;
}
