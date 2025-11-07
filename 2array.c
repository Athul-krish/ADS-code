#include<stdio.h>
void main(){
int a[100],b[100],c[100],i,j,n1,n2,sum;
printf("Enter 1st array limit:");
scanf("%d",&n1);
printf("Enter elements of first array:");
for(i=0;i<n1;i++)
 {
 scanf("%d",&a[i]);
 }
printf("Enter 2nd array limit:");
scanf("%d",&n2);
printf("Enter elements of second array:");
for(i=0;i<n2;i++)
 {
 scanf("%d",&b[i]);
 }

printf("\nFirst array:");
for(i=0;i<n1;i++)
{
	printf("%d ",a[i]);
}

printf("\nsecond array:");
for(j=0;j<n2;j++)
{
	printf("%d ",b[j]);
}

printf("\nThird array:");
for(i=0;i<n1;i++)
{
 c[i]=a[i];
 }
 
for(i=n1,j=0;i<n1+n2;i++,j++)
{
	c[i]=b[j];
}

printf("Third array:"); 
for(i=0;i<n1+n2;i++)
{
 	printf("%d ",c[i]);
} 	
} 
