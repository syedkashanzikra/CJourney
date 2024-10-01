#include<stdio.h>
#include<conio.h>
void main()
{
char gender, name[25]; // initialize character variables
int age; // initialize integer variable
float height; // initialize float variable
printf("\n\tEnter Your Gender: ");
scanf("%c", &gender); // get input
printf("\n\tEnter Your Name: ");
scanf("%s",name); // get input
printf("\n\tEnter Your Age: ");
scanf("%d",&age); // get input
printf("\n\tEnter Your Height: ");
scanf("%f",&height); // get input
printf("\n\tYour Name: %s",name); //print name
printf("\n\tYour Age: %d",age); //print age
printf("\n\tYour Height: %.1f",height); //print height
printf("\n\tYour Gender: %c",gender); //printss gender
getch(); //show output until press any key
}
