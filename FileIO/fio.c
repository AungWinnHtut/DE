#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fout; /*output file*/
  time_t t; /*structure to use time() fun*/
  int i=0;

  srand((unsigned) time(t)); /*to use rand()*/

  fout=fopen("output.txt","a");
  if(fout==NULL){printf("file open error!"); exit(1);}

  i = rand()%6;/*0-5*/
  fprintf(fout,"\n%d",i+1);


  fclose(fout);
  return 0;
}
