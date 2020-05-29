//string.c--字符串的格式化
#include<stdio.h>
#define BLURB "Authentic imitation! "
int main()
{
	printf("/%2s/\n",BLURB);
	printf("/%24s/\n",BLURB);
	printf("/%24.5s/\n",BLURB);
	printf("/%-24.5s/\n",BLURB);
	return 0;
 } 
 /*结果
 /Authentic imitation! /
/   Authentic imitation! /
/                   Authe/
/Authe                   /
*/ 
 
