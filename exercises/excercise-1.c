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
