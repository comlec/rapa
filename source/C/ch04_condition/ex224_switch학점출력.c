#include <stdio.h>
// score�� �Է¹޾� ���� ���
int main(void){
    int score;
    printf("������ >> ");
    scanf("%d", &score);
    int temp = score==100 ? 99 : score;
    switch (temp/10)
    {
    case 9: 
        printf("A����"); 
    case 8:
        printf("B����"); 
    case 7: 
        printf("C����"); 
    case 6:
        printf("D����"); 
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("F����");
    default:
        printf("��ȿ���� �ʴ� �����Դϴ�");
    }
}