#include <stdio.h>
main() {
    // �̸�
    char name[256];
    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", name);

    // ���̵�
    char id[256];
    printf("����� ���̵� �Է��ϼ��� : ");
    scanf("%s", id);

    // ����
    int age;
    printf("���̸� ���ڷ� �Է��ϼ��� : ");
    scanf("%d", &age);

    // ����
    char birth[256];
    printf("������ �Է��ϼ���(����, ��: 0802) : ");
    scanf("%s", birth);

    // �Ź� ũ��
    int size;
    printf("�Ź� ũ�⸦ �Է��ϼ��� : ");
    scanf("%d", &size);

    // ȸ�� ���� ���
    printf("\n\n--- ȸ�� ���� ---\n");
    printf("�̸�      : %s\n", name);
    printf("���̵�    : %s\n", id);
    printf("����      : %d\n", age);
    printf("����      : %s\n", birth);
    printf("�Ź� ũ�� : %d\n", size);

}
