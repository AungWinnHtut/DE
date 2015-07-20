#include<stdio.h>
#include<stdlib.h>
int funCountFromFile(void)
{
	
	int result;
	FILE *fin;
	fin=fopen("randomvalue.txt","r");
	result = funCount(fin);
	if(result!=-1)
	{
		printf("zero count is %d",result);
		return 0;
	}
	else
	{
		printf("error");
		return -1;
	}
	
	fclose(fin);
	return 0;
}
