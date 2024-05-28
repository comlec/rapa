#include <stdio.h>

int main(void){
    int floor ;
    printf("몇측의 피라미드를 쌓으시겠습니까(5~20)?");
    scanf("%d", &floor);
    for(int i=0 ; i<floor ; i++){
        for(int j=i ; j<floor-1 ; j++){
            printf(" ");
        }
        for(int k=0 ; k<i*2+1 ; k++){
            printf("*");
        }
        printf("\n");
    }
}