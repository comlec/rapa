#include <stdio.h>
// �̸�(���ں�����), �ּ�(��������)�� �Է¹ޱ�
/* scanf("%s", ����, �Է¹���byte��) 
    white space�� ���� �� ������ ���۳����� return
   ?
*/
int main(void){
    // char* name; �Է¹��� ���ڿ��� ����� ������ Ȯ������ ����
    char name[128];
    char address[512];
    printf("�̸� >>");
    scanf("%s", name, sizeof(name));
    printf("�ּ� >>");
    scanf("%s", address, sizeof(address));
    printf("�Է��� �̸� : %s\n", name);
    printf("�Է��� �ּ� : %s\n", address);
}