#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Enter Your Name :- ");
    scanf("%s",&name);
    if(strcmp(name,"Harjinder Singh")){
        int date;
        printf("\nEnter your BirthDay Only Date :- ");
        scanf("%d",&date);
        if(date==4){
            printf("HAPPY BIRTHDAY DAD........");
            printf("#########################");
        }
    }
    else{
        printf("Please meet next year");
    }

}