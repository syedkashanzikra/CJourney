#include <stdio.h>
#include <conio.h>
int main() //Start main function
{
int i,b,c;
printf("Enter Number:");
scanf("%d", &c); //Input from user
b=1;
for (i=1; i<=c; i++)
{
b=b*i; //Get factorial 
}
printf("Factorial of Given Number Is: %d\n", b); //print factorial
getch(); //show output until press any key

}
