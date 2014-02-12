#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int *a,*b,*c,i,j=0,k=0,t,n1,n2;
clrscr();
printf("\n enter sizes of arrays");
scanf("%d %d",&n1,&n2);
a=(int *)malloc(n1*sizeof(int));
b=(int *)malloc(n2*sizeof(int));
c=(int *)malloc((n1+n2)*sizeof(int));
printf("\n enter the elements of 1st array");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("\n enter 2nd array elements");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;i<(n1+n2);i++)
{
if(a[j]<=b[k])
{
c[i]=a[j];
j++;
}
else
{
c[i]=b[k];
k++;
}
printf("\t%d",c[i]);
}
printf("\n median element");
if((n1+n2)%2==0)
{
t=(n1+n2)/2;
printf("%f",(float)((c[t+1]+c[t])/2));
}
else
{
t=(n1+n2)/2;
printf("%d",c[t]);
}
getch();
}