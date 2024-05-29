#include <stdio.h>
int main(void){
    int arr[3] = {10,20,30};
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
    }
    int* ptr = arr;
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 ptr[%d] = %d\n", idx, ptr[idx]);
    }
}