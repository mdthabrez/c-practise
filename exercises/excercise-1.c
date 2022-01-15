/*1. Write a C program to perform the following operations: 
a) Conversion of given upper case character to lower case character.
b) To print the ASCII value of the character.
c) To display the given string using various formats (Left aligned, Right aligned, padding 
with spaces, substring extraction etc.)
*/

#include<stdio.h>
int main()
{
char c,s[100]; 
printf("Enter a character in uppercase: ");
scanf(" %c",&c);
printf("The character in lowercase is : %c\n",c+32); 
printf("Enter a character : ");
scanf(" %c",&c);
printf("The ASCII value of the character is : %d\n",c); 
printf("Enter a string: ");
scanf(" %s",&s);
printf("\'%-15s\'\n",s);
printf("\'%+15s\'\n",s);
printf("\'% 15s\'\n",s);
printf("\'%.5s\'\n",s);
 }


/*
2.Write a C program that prints the floating point value in exponential format with the 
following specifications:
a) Correct to two decimal places
b) Correct to four decimal places
c) Correct to eight decimal places
d) Convert it into double with four decimal places
*/

#include<stdio.h>
int main()
{
 float v;
 
 printf("Enter a float number : ");
 scanf("%f",&v);
 printf("%.2e\n",v);
 printf("%.4e\n",v);
 printf("%.8e\n",v);
 v = (double)v;
 printf("%.4e\n",v);
 }


/*
3.Write a C program to read the floating point number. Display the rightmost digit of the 
integral part of the number.
*/

#include<stdio.h>
int main()
{
 int i;
 float f;
 printf("Enter the float value : ");
 scanf("%f",&f);
 i=f;
 i=i%10;
 printf("The rightmost digit of the integral part of the number is %d",i);
}


