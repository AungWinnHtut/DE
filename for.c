#include <stdio.h>
#include <stdlib.h>
#include "funOpenOutputFile.c"


void funOpenOutputFile(void);

int main()
{
    int Myan,Eng,Math,Che,Phy,Bio;
    int Myans,Engs,Maths,Ches,Phys,Bios;  //status
    int fs=0,ps=0,ds=0,i=0,student,es=0;
    FILE* fpOut; //output file pointer

    fpOut = fopen("d:\\Marks.txt","a"); //w is dangerous (override)
    printf("Enter student:   \n");
    scanf("%d",&student);


    for(i=0;i<student;i++)
    {
        do{
            printf("Enter Myan:  \n");
            scanf("%d",&Myan);
            if(Myan<0||Myan>100)
            {
                Myans=3;  //error state
                printf("Your Number is not Incorrect\n");
                printf("Please Try Again Your Number:  \n");
            }
            else
            {
                Myans=9; //clear error state
            }
        }while(Myans==3);

        do{
            printf("Enter Eng:  \n");
            scanf("%d",&Eng);
            if(Eng<=0||Eng>100)
            {
                Engs=3;  //error state
                printf("Your Number is not Incorrect\n");
                printf("Please Try Again Your Number:  \n");
            }
            else
            {
                Engs=9; //clear error state
            }
        }while(Engs==3);

    do{
    printf("Enter Math:  \n");
    scanf("%d",&Math);
    if(Math<=0||Math>100)
    {
        Maths=3;
        printf("Your Number is not Incorrect\n");
        printf("Please Try Again Your Number:  \n");
    }
    else
    {
        Maths=9; //clear error state
    }
    }while(Maths==3);
    do{
    printf("Enter Che:  \n");
    scanf("%d",&Che);
    if(Che<=0||Che>100)
    {
        Ches=3; //error state
        printf("Your Number is not Incorrect\n");
        printf("Please Try Again Your Number:  \n");
    }
    else
    {
        Ches=9; //clear error state
    }
    }while(Ches==3);
     do{
    printf("Enter Phy:  \n");
    scanf("%d",&Phy);
    if(Phy<=0||Phy>100)
    {
        Phys=3; //error state
        printf("Your Number is not Incorrect\n");
        printf("Please Try Again Your Number:  \n");
    }
    else
    {
        Phys=9; //clear error state
    }
    }while(Phys==3);
    do{
    printf("Enter Bio:  \n");
    scanf("%d",&Bio);
    if(Bio<=0||Bio>100)
    {
        Bios=3; //error state
        printf("Your Number is not Incorrect\n");
        printf("Please Try Again Your Number:  \n");
    }
    else
    {
        Bios=9; //clear error state
    }
    }while(Bios==3);


    if(Myan>=0&&Myan<40) Myans=0; //fail
    if(Myan>=40&&Myan<80) Myans=1;  //pass
    if(Myan>=80&&Myan<=    100) Myans=2;  //d
    if(Myan<0||Myan>100) Myans=3;  //error

    if(Eng>=0&&Eng<40) Engs=0; //fail
    if(Eng>=40&&Eng<80) Engs=1;  //pass
    if(Eng>=80&&Eng<=100) Engs=2;  //d
    if(Eng<0||Eng>100) Engs=3;  //error

    if(Math>=0&&Math<40) Maths=0; //fail
    if(Math>=40&&Math<80) Maths=1;  //pass
    if(Math>=80&&Math<=100) Maths=2;  //d
    if(Math<0||Math>100) Maths=3;  //error

    if(Che>=0&&Che<40) Ches=0; //fail
    if(Che>=40&&Che<80) Ches=1;  //pass
    if(Che>=80&&Che<=100) Ches=2;  //d
    if(Che<0||Che>100) Ches=3;  //error

    if(Phy>=0&&Phy<40) Phys=0; //fail
    if(Phy>=40&&Phy<80) Phys=1;  //pass
    if(Phy>=80&&Phy<=100) Phys=2;  //d
    if(Phy<0||Phy>100) Phys=3;  //error

    if(Bio>=0&&Bio<40) Bios=0; //fail
    if(Bio>=40&&Bio<80) Bios=1;  //pass
    if(Bio>=80&&Bio<=100) Bios=2;  //d
    if(Bio<0||Bio>100) Bios=3;  //error

    switch(Myans)
    {
        case 0:fs++; break;
        case 1:ps++; break;
        case 2:ds++; break;
        case 3:es++; printf("ERROR\n"); break;
    }
     switch(Engs)
    {
        case 0:fs++; break;
        case 1:ps++; break;
        case 2:ds++; break;
        case 3:es++; printf("ERROR\n"); break;
    }
     switch(Maths)
    {
        case 0:fs++; break;
        case 1:ps++; break;
        case 2:ds++; break;
        case 3:es++; printf("ERROR\n"); break;
    }
     switch(Ches)
    {
        case 0:fs++; break;
        case 1:ps++; break;
        case 2:ds++; break;
        case 3:es++; printf("ERROR\n"); break;
    }
     switch(Phys)
    {
        case 0:fs++; break;
        case 1:ps++; break;
        case 2:ds++; break;
        case 3:es++; printf("ERROR\n"); break;
    }
     switch(Bios)
    {
        case 0:fs++; break;
        case 1:ps++; break;
        case 2:ds++; break;
        case 3:es++; printf("ERROR\n");break;
    }
    printf("\n\nStudent Roll no. %d \n",i+1);
    printf("Total fail %d\n",fs);
    printf("Total Pass %d\n",ps+ds);
    printf("Pass Only %d\n",ps);
    printf("D Only %d\n",ds);
    printf("Error %d\n",es);

    fprintf(fpOut,"\n\nStudent Roll no. %d \n",i+1);
    fprintf(fpOut,"Total fail %d\n",fs);
    fprintf(fpOut,"Total Pass %d\n",ps+ds);
    fprintf(fpOut,"Pass Only %d\n",ps);
    fprintf(fpOut,"D Only %d\n",ds);
    fprintf(fpOut,"Error %d\n",es);

    }

    fclose(fpOut);

    funOpenOutputFile();

    return 0;
}



