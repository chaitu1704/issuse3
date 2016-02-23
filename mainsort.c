#include<stdio.h>
int sort(int arr[])
{
int i,n,j;
int temp;
for(i=0;i<n;i++)
    {
    for(j=0;j<n-i-1;j++)
    {
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
 }
}
}
printf("the sorted array:");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
return 0;
}
