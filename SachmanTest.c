#include<stdio.h>
int main(){
    for(int i = 1;i<100;i++){
        if(i%3==0&&i%5==0){  // 15,30,45,75,60,90
            printf("\nHi Sachman %d",i);
        }
        else if(i%3==0){ // 3,6,9,12,18,21,24,27
            printf("\nSachman Teko Test nhi aata %d",i);
        }
        else if(i%5==0){ // 5,10,20,25,
            printf("\nSachman ka test kal h %d",i);
        }
        else { // 1, 2, 4, 7, 8, 
            printf("\nSachman ka Dimaag Khrab h %d",i);
        }
    }
}