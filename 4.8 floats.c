//floats.c ---浮点数的组合
#include<stdio.h>

int main()
{
	const double RENT = 3852.99;   //以const方法定义的常量
	
	printf("*%f*\n", RENT) ;        //*3852.990000*
	printf("*%e*\n", RENT) ;        //*3.852990e+003*
	printf("*%4.2f*\n", RENT) ;     //*3852.99*
	printf("*%3.1f*\n", RENT) ;     //*3853.0*
	printf("*%10.3f*\n", RENT) ;    //*  3852.990*
	printf("*%10.3e*\n", RENT) ;   //*3.853e+003*
	printf("*%+4.2f*\n", RENT) ;   //*+3852.99*
	printf("*%010.2f*\n", RENT) ;  //*0003852.99*
	return 0;
 } 
