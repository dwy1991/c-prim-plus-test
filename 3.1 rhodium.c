//rhodium.c--看自己是否为超前消费 
#include<stdio.h>
int main()
{
	float salary; //用户的工资
	float consume; // 用户的消费
	printf("你的月工资是多少？\n") ;
	printf("请输入你的工资：单位为元\n") ;
	scanf("%f",&salary);
	printf("请输入你的娱乐消费");
	 	scanf("%f",&consume);
	if(salary>=(1000+consume))
	{
		printf("你的消费正常"); 
		}
	else
	{
		printf("请注意你已经进行超前消费"); 	
	 } 
 } 
