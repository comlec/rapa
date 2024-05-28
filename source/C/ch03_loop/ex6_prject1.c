#include <stdio.h>
int main(void){
    int from=2, to=7;
    for(int i=1 ; i<10 ; i++){
        for(int j=from ; j<=to ; j++){
            printf("%d x %d = %d\t", j, i, j*i);
        }
        printf("\n");
    }
}