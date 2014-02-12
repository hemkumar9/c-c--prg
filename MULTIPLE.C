#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int *a,i,j=0,n, count=0,count1=0,count2=0,element,l,k;
clrscr();
printf("\n enter the array size");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
printf("\n enter array elements");
for(i=0;i<n;i++)
{
one:scanf("%d",&a[i]);
if(a[i]>99)
{
printf("\n number greater than 99 give smaller");
goto one;
}
}
	while(1)
	{
		if(a[j]!=-1)
		{
		k=a[j];
	for(i=j;i<n;i++)
	{
	if(a[i]==k)
	{
	a[i]=-1;
	count++;
	}
	}
	}
	if(count>count1)
	{
	element=k;
	count1=count;
	}
for(i=0;i<n;i++)
{
if(a[i]==-1)
count2++;
}
if(count2==n)
break;
j++;
count=0;
count2=0;
}
printf("\n element %d\t count is %d",element,count1);
getch();
}