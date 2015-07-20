#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch;

  do {
        /* code */
        ch=_getch();  /*-32 77*/
        if(ch==-32)  /*if special arrow? */
          ch=_getch(); /*read which arrow automatically*/
        /* L-75 R-77 U-72 D-80*/
        if(ch==75)
        {
          printf("Left\n");
        }
        if(ch==77)
        {
          printf("Right\n");
        }
        if(ch==72)
        {
          printf("Up\n");
        }
        if(ch==80)
        {
          printf("Down\n");
        }
        if(ch==13)
        {
          printf("Enter\n");
        }
        if(ch==27)
        {
          printf("Esc\n");
        }

  } while(ch!=27);


  return 0;
}
