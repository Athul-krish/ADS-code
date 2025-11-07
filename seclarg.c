#include<stdio.h>
void main(){
int a[100],i,n,lrg,sml,s;
printf("Enter array limit:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
lrg=a[0];
sml=a[0];
s=a[0];
printf("Array is:\n");
for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 
 
if(a[i]>lrg)
{
	s=lrg;
	lrg=a[i];
 }
if(a[i]<sml)
{
	sml=a[i];	 
 }
}
 printf("\n Largest:%d  Smallest:%d Second largest:%d",lrg,sml,s);
}
