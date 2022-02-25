#include <stdio.h>

int main(void) {
	//.       *
    //.     * *
    //    * * *
    //. * * * *
    //* * * * *
    int a;
    scanf("%d",&a);
    int space = a-1;
    for(int i = 1;i<=a;i++){
        for(int k = 1;k<=space;k++){
            printf(" ");
        }
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        space--;
    }
}