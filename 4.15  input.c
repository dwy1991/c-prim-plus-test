//input.c  什么情况下使用&
#include<stdio.h>
int main()
 {
 	int age;    //变量
 	float  assets;  //常量
 	char pet[30];   //字符串
 	
 	printf("Enter your age,assets, and favourite pet.\n");
 	scanf("%d %f",&age,&assets);//此处需要使用&
 	scanf("%s",pet);
	printf("%d $%.2f %s\n",age,assets,pet);
	return 0; 
 	
 	
 }
 //数组输入时不
