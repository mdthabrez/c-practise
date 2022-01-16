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

/*
4. Write a C program to prepare a proper grocery bill (with proper formatting) by specifying 
the name of the items purchased, quantity, and its price per unit. Total amount incurred with 
Today savings need to be printed in the bill.
*/

#include <stdio.h>
int main()
{
 printf("%-15s%-15s%-15s%-15s\n","Products","Quantity","Rate","Total");
 printf("%-15s%-15s%-15s%-15s\n","Maggi","2","10","20");
 printf("%-15s%-15s%-15s%-15s\n","Lays","1","20","20");
 printf("%-15s%-15s%-15s%-15s\n","Pepsi","1","35","35");
 printf("%-15s%-15s%-15s%-15s\n","","","Net","Rs.75");
 printf("%-15s%-15s%-15s%-15s\n","","","Discount(10%)","Rs.7.5");
 printf("%-15s%-15s%-15s%-15s\n","","","Total","Rs.67.5");
 printf("%-15s%-15s%-15s%-15s\n","","","Todays savings","Rs.10");
 return 0;
}


/*
5.Write a C program to print the following format using iterative statements:
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/

#include<stdio.h>
int main()
{
 char c='A';
 for (int i = 0; i < 6; i++)
 {
 for (int j = 0; j < i+1; j++)
 {
 printf("%c",c+j);
 }
 printf("\n"); 
 }
}


/*
6. Write a C program to print the character Z using only the character *.
*/

#include<stdio.h>
int main()
{
 int n=5;
 while (n--)
 {
 printf("*");
 }
 n=4;
 while (n>1)
 {
 printf("\n%*s",n,"*");
 n--;
 }
 printf("\n");
 n=5;
 while (n--)
 {
 printf("*");
 }
}


/*
7.Write a C program to find whether the given number is prime or composite.
*/

#include<stdio.h>
int main()
{
 int n,f=0;
 printf("Enter a number : ");
 scanf("%d",&n);
 for (int i = 2; i <= n/2; i++)
 {
 
 if(n%i==0)
 {
 f=1;
 break;
 }
 }
 
 if(f==0)
 {
 printf("%d is Prime",n);
 }
 else
 {
 printf("%d is Composite",n);
 }
}


