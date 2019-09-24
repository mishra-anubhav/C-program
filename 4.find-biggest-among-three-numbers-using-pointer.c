#include <stdio.h>

int main ()
{
int a=12,b=3,c=45;
int *p=a,*q=b,*r=c;
if( *p>*q && *p>*r)
printf("biggest of all is %d with value %d",*p,p);
if( *q>*p && *q>*r)
printf("biggest of all is %d with value %d",*p,p);
else
printf("biggest of all is %d with value %d",*r,r);
}
/*TESTING
On the way */