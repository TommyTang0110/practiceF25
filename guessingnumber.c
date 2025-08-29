#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char username[20];
	printf("Hi,What's your name?");
	scanf("%s",username);
	printf("Hi $s.Let play a game\n",username);
	int turn = 0;
	Srand(time(Null));
	int correct = rand()%100;
	int guess;
	int keepGoing=true;
	while(keepGoing){
		turn++;
		printf("turn%d","Please enter your guessing number: ",turn);
		scanf("%d",&guess);
		if(guess>correct){
		   printf("Too Big");}
		else if(guess<correct){
			printf("Too Low");}
		else{
			keepGoing = false;}

	
