#include<stdio.h>
#include<conio.h>
void main() //start main function
{
int r,c; // initialize variable as integer row & Column
printf("\n\n");
for (r=1;r<=5;r++) //check row 
{
for (c=1;c<=r; c++) //check column
{
printf("%d",c); //print number in column
}
printf("\t\n");
}
getch(); //show output until press any key
}
