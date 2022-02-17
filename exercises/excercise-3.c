/*
1. Write a C program to generate Pascal’s Triangle
*/
#include<stdio.h>
int main()
{
int r, c = 1, space, i, j;
printf("\nEnter the number of rows : ");
scanf("%d",&r);
printf("\n");
for(i=0; i<r; i++)
{
for(space=1; space <= r-i; space++)
printf(" ");
for(j=0; j <= i; j++)
{
if (j==0 || i==0)
c = 1;
else
c = c*(i-j+1)/j;
printf("%4d", c);
}
printf("\n\n");
}
return 0;
}
