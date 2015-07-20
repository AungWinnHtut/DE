/*de/codes/game/main.c*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ux=0,uy=0,dx=0,dy=0;
	int i;
	int count;
	time_t t;
	FILE *fin,*fout;
	fout = fopen("randomvalue.txt","w");
	fin = fopen("count.config","r");
	if (fout==NULL) {	printf("fout error"); exit(1);	}
	if (fin==NULL)  {	printf("fin error"); 	exit(1);	}

	srand((unsigned) time(&t)); /*to use rand()*/

	fscanf(fin,"%d",&count);

	for(i=0;i<count;i++)
	{
		ux=rand()%(640+1);
		printf("%d\n",ux);
		fprintf(fout,"%d\n",ux);

	}
	fclose(fout);
	fclose(fin);
	system("notepad++ d:\\randomvalue.txt");
	return 0;
}
