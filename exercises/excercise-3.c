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
