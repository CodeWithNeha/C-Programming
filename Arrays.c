// Arrays:- 1,2,3,4,5,6,7
            // 0 1 2 3 4 5 6



// int arr[10];


#include<stdio.h>
int main(){
    // int arr[] = {10,20,30,40,50,60,70,80,90,100} ;
    // for(int i = 0;i<10;i++){
    //     scanf("%d",&arr[i]);
    // }
    int n;
    printf("Please Enter the size of Array :- ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("%d : ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    // printf("%d ",arr[5]);
    // arr[5] = 400;

    printf("Array:- ");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}