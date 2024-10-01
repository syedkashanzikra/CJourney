#include <stdio.h>
#include <conio.h>
void main() //start main function
{
char ch; //initialize character variable
printf("Press Any Key To Check It is Alphabet Or Not\n ");
ch=getch(); //get character on press any key
if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) //check character 
printf("You Pressed %c is an Alphabet",ch); //show output if answer is true
else
printf("You Pressed %c is not an Alphabet",ch); //show output if answer is false
getch(); //show output until press any key
}
