#include <stdio.h>
// �迭���� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�
void sort(int* arr, int cnt); // �Լ����� (cnt:�迭���� ����)
int main(void){
    int lotto[6] = {41, 1, 35, 20, 45, 10};
    printf("������ : ");
    for(int idx=0 ; idx<6 ; idx++){
        printf("%d\t", lotto[idx]);
    }
}