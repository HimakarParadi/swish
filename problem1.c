#include<stdio.h>
int mail()
{
int x;
int p;
int s=0;
scanf("%d",&x);
scanf("%d",&p);
while(x!=0)
{
s=s+x;
x=x-(x*p)/100
}
printf("%d",s);
