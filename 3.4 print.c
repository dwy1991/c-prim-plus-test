//print2.c   printf()的更多属性
#include<stdio.h>
int main()
{
	unsigned int un=3000000000;                        //int为32位 
	short end=200;                                      //short为16位 
	long big=65537;
	long long verybig=12345678908642;
	printf("un=%u and not %d\n",un,un);
	printf("end=%hd and  %d\n",end,end);
	printf("big=%ld and not %hd\n",big,big);
	printf("verybig=%lld and not %ld\n",verybig,verybig);
	return 0;
 } 
 /*对于无符号数un使用%d会导致显示负值，对于big，使用%ld时是32位为000000000000000010000000000000001
 而对于%hd显示16位，则是0000000000000001，结果显示为1.*/ 
  
