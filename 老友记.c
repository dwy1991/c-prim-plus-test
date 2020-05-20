//小作业 老友记输出
#include<stdio.h>
#include<windows.h>
void Spoke(char name[10000],int time);
int main()
{
Spoke("There's nothing to tell! He's just some guy I work with!\n",1000);
Spoke("Come on, you're going out with the guy! There's gotta be something wrong with him!\n",2000);
Spoke(" All right Joey, be nice.  So does he have a hump? A hump and a hairpiece?\n",3000);
Spoke(" Wait, does he eat chalk?\n",3000);
Spoke("Just, 'cause, I don't want her to go through what I went through with Carl- oh!\n",2000);
Spoke("Okay, everybody relax. This is not even a date. It's just two people going out to dinner and- not having sex.\n",3000);
Spoke("Sounds like a date to me.\n",4000);
Spoke("Chandler: Alright, so I'm back in high school, I'm standing in the middle of the cafeteria, and I realize I am totally naked.\n",3000);
Spoke("All: Oh, yeah. Had that dream.\n",5000);
Spoke("Chandler: Then I look down, and I realize there's a phone... there.\n",2000);
Spoke("Joey: Instead of...?\n",4000);
Spoke("Chandler: That's right.\n",2000);
Spoke("Joey: Never had that dream.\n",2000);
Spoke("Phoebe: No.\n",2000);
Spoke("Chandler: All of a sudden, the phone starts to ring. Now I don't know what to do, everybody starts looking at me. \n",2000);
Spoke("Monica: And they weren't looking at you before?!\n",4000);
Spoke("Chandler: Finally, I figure I'd better answer it, and it turns out it's my mother, which is very-very weird, because- she never calls me!\n",3000);
Spoke("Ross: (mortified) Hi.\n",5000);
Spoke("Joey: This guy says hello, I wanna kill myself.\n",2000);
Spoke("Ross: I just feel like someone reached down my throat, grabbed my small intestine, pulled it out of my mouth and tied it around my neck...\n",3000);
Spoke("Chandler: Cookie?\n",6000);
Spoke("Monica: (explaining to the others) Carol moved her stuff out today.\n",3000);
Spoke("Joey: Ohh\n",3000);
Spoke("Monica: (to Ross) Let me get you some coffee.\n",3000);
 } 
void Spoke(char name[10000],int time)
{
	Sleep(time);
	printf("%s",name);
}
