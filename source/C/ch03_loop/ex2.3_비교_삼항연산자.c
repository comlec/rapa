#include <stdio.h>
// 비교연산자 : < <= > >= == , !=, ...
// 삼항연산자 : (조건) ? (조건이 참일때의 값) : (조건이 거짓일때 값)
int main(void){
    int n1 = 10, n2=5;
    int result = n1<=n2;
    printf("%d %s %d는 %d\n", n1, "<=", n2, result);
}