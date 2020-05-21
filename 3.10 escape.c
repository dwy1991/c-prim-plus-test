//escape.c ---使用转义字符
#include<stdio.h>
int main()
{
	float salary;
	printf("\aEnter your desired monthly salary: ");
	printf("$_______\b\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year .",salary,salary*12.0);
	printf("\rGee!\n");
	return 0;
 } 
 /*主要是退格符的使用，可以达到类似于闪烁的效果，再有就是windows的警告声音能响起来，这是我没有想到的*/
