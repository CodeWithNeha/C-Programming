#include<stdio.h>
int main(void){
    int choice;
    int bill = 5;
    do{
    printf("/n Press 1 for Ice cream = 100 /n Press 2 for Shahi paneer = 500 /n Press3 for Palak paneer = 150 ");
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("your item is added to your bill");
        bill = bill + 100;
    }
    else if(a==2){
        printf("your item is added to your bill");
        bill = bill + 500;
    }
    else if(a==3){
        printf("your item is added to your bill");
        bill = bill + 150;
    }
    else{
    printf("Are you legally blind if yes send me the certificate of it on what's app");
}
printf("Your total bill is = %d ",bill);
printf("if you want anything else press y");
scanf("%d",&choice);
}
while(choice == 0);
printf("Your total bill is = %d ",bill);
}