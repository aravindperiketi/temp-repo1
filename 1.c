#include<stdio.h>
#include"mymath.h"

int func(int *x,int *y)
{
	*x=*x+*y;
}

int main()
{
int a=10;
int b=20;
printf("myadd:%d",myadd(x,y));

printf("%d\n",func(&a,&b));
}
