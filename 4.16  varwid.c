//varwid.c--使用可变宽度的输出字段
#include<stdio.h>
int main()
{
	unsigned width,precision;
	int number=256;
	double weight =242.5;
	
	printf("What field width?\n");
	scanf("%d",&width);
	printf("The number is : %*d:\n" ,width,number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d",&width,&precision);
	printf("Weight=%*.*f\n",width,precision,weight);
	return 0;
 } 
 //使用*可以控制输出宽度 