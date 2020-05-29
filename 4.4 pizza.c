//pizza.c
#include<stdio.h>
#define PI 3.14159     //define可以定义字符串和数字，不能这样写  #define TOES=20   后面没有分号
int main()
{
	float area,circum,radius;
	
	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circum=2.0*PI*radius;
	printf("Your basic pizza parameters are as follows: \n");
	printf("circumference= %1.2f,area=%1.2f\n",circum,area);
	return 0;
}
