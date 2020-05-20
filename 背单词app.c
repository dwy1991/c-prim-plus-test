// 背单词app
#include<stdio.h>
#include<windows.h>
void Spoke(char name[10000],int time);
int main()
{
Spoke("正在学习词汇的逻辑unit1--政治\n",1000);
Spoke("sovereign\n",2000);
Spoke("nation\n",3000);
Spoke("state\n",3000);
Spoke("system\n",2000);
Spoke("function\n",3000);
Spoke("form\n",4000);
Spoke("federal\n",3000);
Spoke("dictate\n",5000);
Spoke("dictator\n",2000);
Spoke("leverage\n",4000);
Spoke("autonomy\n",2000);
Spoke("propagation\n",2000);
Spoke("eligible\n",2000);
Spoke("inaugurate\n",3000);
Spoke("inaugurate\n",3000);
Spoke("formulate\n",3000);


}

void Spoke(char name[10000],int time)
{
	Sleep(time);
	printf("%s",name);
}
