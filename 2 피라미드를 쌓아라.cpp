#include <stdio.h> 
main() {
    int floor;
    printf("�� ������ �װڽ��ϱ�?(5~100) ");
    scanf("%d", &floor);
    for (int i = 0; i < floor; i++) {             // �Է¹��� ��(��)��ŭ �ݺ�
        for (int j = i; j < floor - 1; j++) {     // ��ĭ(S) ���
            printf("S");                          // printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++) {     // ��ǥ ���
            printf("*");
        }
        printf("\n");                             // �ٹٲ�(�� ����)
    }
}
