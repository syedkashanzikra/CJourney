#include<stdio.h>
#include<conio.h>
void main (void) //start main function
{
int row,col; //initialize integer variables
printf("\n\n");
for (col=1; col<12; col++) //check column numbers
{
for (row=1; row<12; row++) //check row numbers
if ((row+col)%2==0) //check condition
printf("\xDB"); //print filled box if condition is true
else
printf(" "); //print space if condition is false
printf("\n"); //print new line
}
getch(); //show output until press any key
}
