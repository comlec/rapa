#include <stdio.h>
// 배열안의 값을 오름차순 정렬하는 함수를 구현하시오
void sort(int* arr, int cnt); // 함수선언 (cnt:배열방의 갯수)
int main(void){
    int lotto[6] = {41, 1, 35, 20, 45, 10};
    printf("정렬전 : ");
    for(int idx=0 ; idx<6 ; idx++){
        printf("%d\t", lotto[idx]);
    }
}