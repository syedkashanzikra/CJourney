#include<conio.h>
#include<stdio.h>
void main() //Start main function
{
int tbl_num, i, pro;
printf("\tPlease Enter Number Which you Want to Print Table ");
scanf("%d",&tbl_num); //input from user
for (i=1; i<=10; i++)
{
pro=tbl_num*i; // multiplication user input with loop counter
printf("\t\t\t\t%d x %d = %d\n",tbl_num,i,pro); // print table in standard format
}
getch(); //show the output until press any key
}
