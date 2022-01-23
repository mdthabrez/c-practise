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
