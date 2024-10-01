#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1415927 //Define pi in header
void main() //Start main function
{
float a,b,t,s,r;
printf("Please Enter Value for Altitude of Triangle.");
scanf("%f",&a); //input from user
printf("Please Enter Value for Base of Triangle.");
scanf("%f",&b);
printf("Please Enter Value for Radius of Sphere.");
scanf("%f",&r);
t=(1.0/2.0)*(a*b); // formula of triangle 1


s=(4.0/3.0)*pi*pow(r,3); // formula of sphere 4


printf("The Area of Triangle is = %.2f\n\n",t); //print area of triangle
printf("The Area of Sphere is = %.2f",s); //print area of sphere
getch(); //show the output until press any key

}
