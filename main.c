#include<stdio.h>
main()
{
int arr[100];
int i,n,j;
int temp;
printf("enter no.of elements of array:");
scanf("%d",&n);
printf("enter %d elements ",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
sort(arr);
 return 0;
}

