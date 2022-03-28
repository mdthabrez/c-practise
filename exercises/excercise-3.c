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


/*
2.Write a C program to merge two integer arrays. Also display the merged 
array in reverse order.
*/
#include<stdio.h>
int main()
{
 int arr1[50], arr2[50], size1, size2, i, k, merge[100];
 printf("Enter Array 1 Size: ");
 scanf("%d", &size1);
 printf("Enter Array 1 Elements: ");
 for(i=0; i<size1; i++)
 {
 scanf("%d", &arr1[i]);
 merge[i] = arr1[i];
 }
 k = i;
 printf("Enter Array 2 Size: ");
 scanf("%d", &size2);
 printf("Enter Array 2 Elements: ");
 for(i=0; i<size2; i++)
 {
 scanf("%d", &arr2[i]);
 merge[k] = arr2[i];
 k++;
 }
 printf("The new array after merging is : ");
 for(i=0; i<k; i++)
 printf("%d ", merge[i]);
 printf("\nThe new array after merging in reverse order is : ");
 for(i=k-1; i>=0; i--)
 printf("%d ", merge[i]);
 return 0;
}


/*
3.Write a C program which deletes all the duplicate elements present in the 
array.
*/
#include<stdio.h>
int main() {
 int arr[20], i, j, k, size;
 printf("\nEnter array size : ");
 scanf("%d", &size);
 printf("Enter the array : ");
 for (i = 0; i < size; i++)
 scanf("%d", &arr[i]);
 
 for (i = 0; i < size; i++) {
 for (j = i + 1; j < size;) {
 if (arr[j] == arr[i]) {
 for (k = j; k < size; k++) {
 arr[k] = arr[k + 1];
 }
 size--;
 } else
 j++;
 }
 }
 printf("Array without duplicates : ");
 for (i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 return (0);
}

/*
4.Write a C program to arrange the value of the numbers in an array in such 
a way that the odd numbers always precede the even numbers.
*/
#include <stdio.h>
int main()
{
 int n,arr[100];
 printf("Enter Array Size: ");
 scanf("%d", &n);
 printf("Enter Array Elements: ");
 for(int i=0; i<n; i++)
 {
 scanf("%d", &arr[i]);
 }
 int j = -1;
 for (int i = 0; i < n; i++) {
 if (arr[i] % 2 != 0) {
 j++;
 int temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 printf("The new array is : ");
 for(int i=0; i<n; i++)
 printf("%d ", arr[i]);
}


/*
5.Write a C program to interchange the second largest and second smallest 
element present in the array.
*/
#include <stdio.h>
int main()
{
 int i,n,mini,maxi;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter the array elements :");
 int a[n]; 
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 if(n<2)
 {printf("Invalid Input");}
 else
 {
 int min = a[0];
 int smin = a[1] ;
 for( i = 0; i < n; i++) 
 {
 if(a[i] < min)
 {
 smin = min;
 min = a[i];
 }
 }
 for( i = 0; i < n; i++) 
 {
 if(a[i] < smin && a[i] != min)
 {
 smin = a[i];
 }
 }
 int max = a[0];
 int smax = a[1] ;
 for( i = 0; i < n; i++) 
 {
 if(a[i] > max)
 {
 smax = max;
 max = a[i];
 }
 }
 for( i = 0; i < n; i++) 
 {
 if(a[i] > smax && a[i] != max)
 {
 smax = a[i];
 }
 }
 for ( i = 0; i < n; i++)
 {
 if(a[i]==smin)
 {
 mini=i;
 }
 else if(a[i]==smax)
 {
 maxi=i;
 }
 }
 int temp=a[mini];
 a[mini] = a[maxi];
 a[maxi] = temp;
 printf("The array after interchange : ");
 for( i=0; i<n; i++)
 printf("%d ", a[i]);
 }
 return 0;
}

/*
6.Write a C program to display the sum and product of the elements above and 
below the main diagonal of a matrix.
*/
#include<stdio.h>
int main()
{
int i,j,m,n,d1=0,d2=0,a[5][5];
printf("How many rows and columns:");
scanf("%d%d",&m,&n);
printf("Enter matrix elements:\n");
for(i=0;i<m;++i)
for(j=0;j<n;++j)
{
scanf("%d",&a[i][j]);
if(j>i)
d1+=a[i][j];
else
if(i>j)
d2+=a[i][j];
}
printf("Sum of elements above the diagonal=%d\n",d1);
printf("Sum of elements below the diagonal=%d",d2);
return 0;
}


/*
7.Write a C program to calculate XA+YB where A and B are matrices and X=2 
and Y=3.
*/
#include <stdio.h>
int main() {
 int r, c, a[100][100], b[100][100], sum[100][100], i, j,x=2,y=3;
 printf("Enter the number of rows : ");
 scanf("%d", &r);
 printf("Enter the number of columns : ");
 scanf("%d", &c);
 printf("Enter elements of 1st matrix:\n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 scanf("%d", &a[i][j]);
 }
 printf("Enter elements of 2nd matrix:\n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 scanf("%d", &b[i][j]);
 }
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 sum[i][j] = x*a[i][j] + y*b[i][j];
 }
 printf("The value of XA+YB is : \n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 printf("%d ", sum[i][j]);
 if (j == c - 1) {
 printf("\n");
 }
 }
 return 0;
}


/*
8.Write a C program to implement linear search.
*/
#include <stdio.h>
int main()
{
 int array[100], search, c, n;
 printf("Enter number of elements in array : ");
 scanf("%d", &n);
 printf("Enter %d integer(s) : ", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("Enter a number to search : ");
 scanf("%d", &search);
 for (c = 0; c < n; c++)
 {
 if (array[c] == search) 
 {
 printf("%d is present at location %d.\n", search, c+1);
 break;
 }
 }
 if (c == n)
 printf("%d isn't present in the array.\n", search);
 return 0;
}

/*
9.Write a C program to delete a number in an array that is already in sorted 
order.
*/
#include <stdio.h>
int main()
{
 int i, n, j, num, arr [100]; 
 printf("Enter Array Size: ");
 scanf("%d", &n);
 printf("Enter Array Elements: ");
 for(int i=0; i<n; i++)
 {
 scanf("%d", &arr[i]);
 }
 printf("Enter the number to be deleted: ");
 scanf("%d", &num);
 for(i=0;i<n;i++)
 {
 if(arr[i]==num)
 {
 for(j=i;j<n;j++)
 {
 arr[j] = arr[j+1];
 }
 break;
 }
 }
 printf("The array after deletion is:");
 for(i=0;i<n-1;i++)
 {
 printf("%d ",arr[i]);
 }
}

