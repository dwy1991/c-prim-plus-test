//width.c--字段宽度
 #include<stdio.h>
 #define PAGES 931
 int main()
 {
 	printf("*%d*\n",PAGES);// 输出*931* 
 	printf("*%2d*\n",PAGES);//输出*931* 
 	printf("*%10d*\n",PAGES);//输出*       931* 
 	printf("*%-10d*\n",PAGES);//输出*931       * 
 	return 0;
 }



