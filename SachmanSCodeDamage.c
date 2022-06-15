#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int star = 1;
    int space = n-1;
    for(int i = 1;i<=n;i++){
        for(int sp = 1;sp<=space;sp++){
          printf(" ");
        }
        for(int j = 1;j<=star;j++){
            printf("*");
        }
        if(i<=n/2){
            star +=2;
            space--;
        }
        else{
            star-=2;
            space++;
        }
        printf("\n");

    }
}