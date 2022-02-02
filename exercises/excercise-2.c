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


/*
4. Write a C program to generate calendar of a month given the start day of the week and the 
number of days in that month.
*/
#include <stdio.h>
int main()
{
 int days,s,i;
 printf("Number of days in the month: ");
 scanf("%d", &days);
 printf("Codes of the first day of the month are \n ");
 printf("Monday - 1\nTuesday - 2\nWednesday - 3\nThursday - 4\nFriday - 5\nSaturday - 6
\nSunday - 7\n ");
 printf("Enter the code of the first day of the month : ");
 scanf("%d", &s);
 printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
 for(int j=s-1;j>0;j--)
 {
 printf("\t");
 }
 for (i = 1; i <= 8-s; i++)
 {
 printf("%d\t",i);
 }
 for (int j = 0 ; i <= days; i++,j++)
 {
 if(j%7==0)
 printf("\n");
 printf("%d\t",i);
 }
}


/*
5. Write a C program to sum the series 1/1 + 22/2 + 33/3 + ………
*/
#include<stdio.h>
#include <math.h>
int main()
{
 int n,i;
 double sums = 0.0, res;
 printf("Enter a number n : ");
 scanf("%d",&n);
 for (i = 1; i <= n; ++i) {
 res = pow(i, i)/i;
 sums += res;
 }
 printf("%.2f", sums);
}


/*
6. Write a C program to find the largest of four numbers using && operator.
*/
#include<stdio.h>
int main()
{
 int a,b,c,d,max;
 printf("Enter the first number : ");
 scanf("%d",&a);
 printf("Enter the second number : ");
 scanf("%d",&b);
 printf("Enter the third number : ");
 scanf("%d",&c);
 printf("Enter the fourth number : ");
 scanf("%d",&d);
 
 if(a>=b && a>=c && a>=d)
 max=a;
 else if(b>=a && b>=c && b>=d)
 max=b;
 else if(c>=a && c>=b && c>=d)
 max=c;
 else if(d>=b && d>=c && d>=a)
 max=d;
 printf("The largest of the four numbers is %d",max);
}


/*
7. Write a C program to accept the marks in four subjects of 10 students belonging to a class. 
Calculate the total, aggregate and grade of each student and display a suitable remark using 
Switch case statement.
*/
#include<stdio.h>
int main()
{
 int arr[10],n;
 float sum=0,agg=0;
 char grade;
 printf("Enter the number of students : ");
 scanf("%d",&n);
 for (int i = 0; i < n; i++)
 {
 sum=0.0;
 printf("Enter the 4 subject marks of student no.%d : ",i+1);
 for (int j = 0; j < 4; j++)
 {
 scanf(" %d",&arr[j]);
 sum += arr[j];
 }
 agg=sum/4;
 if(agg>=90)
 grade='O';
 else if(agg>=80)
 grade='A';
 else if(agg>=70)
 grade='B';
 else if(agg>=60)
 grade='C';
 else if(agg>=33)
 grade='D';
 else
 grade='F';
 printf("Total : %.2f\n",sum);
 printf("Aggregate : %.2f\n",agg);
 printf("Grade : %c\n",grade);
 printf("Remarks :");
 switch (grade)
 {
 case 'O':
 printf("Outstanding Performance");
 break;
 
 case 'A':
 printf("Very Good Performance");
 break;
 
 case 'B':
 printf("Good Performance");
 break;
 
 case 'C':
 printf("Can do better");
 break;
 case 'D':
 printf("Need to improve");
 break;
 case 'F':
 printf("Failed");
 break;
 }
 printf("\n");
 }
}
