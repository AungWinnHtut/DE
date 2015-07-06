#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp; /*file pointer*/
	fp = fopen("d:\\students\\de\\codes\\hello.txt","a"); /* use "a" if u want to append*/

	fprintf(fp,"\ni am a lecturer");
	
	system("notepad d:\\students\\de\\codes\\hello.txt");

	return 0;
}
