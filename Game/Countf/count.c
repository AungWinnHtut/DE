/*count.c*/
#include<stdio.h>
#include<stdlib.h>
#define ERR -1

int funCount(FILE* fi); /*funCount.c*/
int funCountFromFile(void);/*funCountFromFile.c*/
int main()
{
	if(funCountFromFile()!=ERR)
	{
		printf("\nOK\n");
	}
	else
	{
		printf("\nerror\n");
		return -1;
	}
	return 0;
}


