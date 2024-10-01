#include <stdio.h> 
#include <conio.h>
void main() // start main function
{
int i; // initialize integer variable 
printf("\n"); 
for (i=32; i<=127; i++) // count variable values
{
printf("\tASCII VALUE OF %d=%c\n",i,i); //print value
}
getch(); // show output until press any key

}
