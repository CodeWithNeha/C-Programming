#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space = n-1;
    int star = 1;
    for(int i = 1;i<=n;i++){
        for(int sp = 1;sp<=space;sp++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star +=2;
        space--;
    }
}