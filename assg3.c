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
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
if(arr[j]>=arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
 }
}
}
printf("the sorted array:");
{
 for (i=0;i<n;i++)
printf("%d\t",arr[i]);
getch();
return 0;
}
}
