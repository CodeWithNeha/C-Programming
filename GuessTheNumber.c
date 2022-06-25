#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// rand() % (max_number + 1 - minimum_number) + minimum_number
int main(){
    int num = (rand()%(100+1-1))+1;
    int guess;
    int count = 1;
    printf("Please guess a number between 1 to 100 :- ");
    scanf("%d",&guess);
    while(1){
         if(count>5){
            printf("Better Luck next Time");
            break;
        }
        if(guess==num){
            printf("Congratulations You WON!!!!!!!!!!!!!!!!!!");
            break;
        }
        else if(guess>num){
            printf("Please Guess small number :- ");
        }
        else{
            printf("Please Guess large number :- ");
        }
        scanf("%d",&guess);
        count++;
    }
     srand(time(0));
}