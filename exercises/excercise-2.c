/*1.Write a C program to read a character until a * is encountered. Also count the number of
upper case, lower case and numbers entered by the users.
*/

# include <stdio.h>
int main()
{
int i,u=0,l=0,d=0;
char arr[100];
printf("Enter multiple single characters (* to quit)\n");
for ( i = 0;; i++)
{
 scanf("%c",&arr[i]);
 if(arr[i]=='*')
 {
 break;
 }
 else if((int)arr[i]>=65 && (int)arr[i]<=90)
 {
 u++;
 }
 else if((int)arr[i]>=97 && (int)arr[i]<=122 )
 {
 l++;
 }
 else if( (int)arr[i]>=48 && (int)arr[i]<=57)
 {
 d++;
 }
}
printf("The number of upper case letters : %d\n",u);
printf("The number of lower case letters : %d\n",l);
printf("The number of digits : %d\n",d);
}


/*
2. Write a C program to display the square and cube of first n natural numbers using do-while loop.
*/
#include<stdio.h>
int main()
{
 int n,i=1;
 printf("Enter number n : ");
 scanf("%d",&n);
 printf("squares\tcubes\n");
 do
 {
 printf("%d\t%d\n",i*i,i*i*i);
 i++;
 } while (i<=n);
}


/*
3.Write a C program to enter a decimal number. Calculate and display the octal and 
hexadecimal equivalent of this number.
*/
#include<stdio.h>
int main()
{
 int n,i=1;
 printf("Enter number n : ");
 scanf("%d",&n);
 printf("The number in octal is %o\n",n);
 printf("The number in hexadecimal is %x\n",n);
}
