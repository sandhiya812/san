#include<stdio.h>
#include<conio.h>
int main()
{
  int myArray[9] = {1,2,3,4,5,6,7,8,9};
  int i;
  for(i=0;i<9;i++)
  {
    printf("Address for %d is %d\n",myArray[i],&myArray[i]);
  }
getch();
}
