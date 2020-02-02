#include<stdio.h>
#include"myadd.h"

int func(int *x,int *y)
{
	*x=*x+*y;
}

int main()
{
int a=10,n=4;
int b=20,r=7;
printf("myadd:%d",myadd(r,n));

printf("%d\n",func(&a,&b));
}
