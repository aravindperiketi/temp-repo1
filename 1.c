#include<stdio.h>
#include"myadd.h"

int func(int *x,int *y)
{
	++(*x);
	++(*y);
}

int main()
{
int a=10,n=4;
int b=20,r=7;
printf("myadd:%d\n",myadd(r,n));

func(&a,&b);
printf("%d\n%d\n",a,b);
}
