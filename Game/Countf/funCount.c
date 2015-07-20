#include<stdio.h>
#include<stdlib.h>
int funCount(FILE* fi)
{
	int count_0=0;
	int read;
	if(fi!=NULL)
	{
		while(fscanf(fi,"%d",&read)!=EOF)
		{		
			if(read==0) count_0++;			
		}
		return count_0;
	}
	else
	{		
		return -1;
	}
	
	
}