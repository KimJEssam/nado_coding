#include <stdio.h>

main()
{	
	// �̸�  
	char name[256];
	printf("�̸��� ������? ");
	scanf("%s", name);

	// ���� 
	int age;
	printf("�� ���̿���? ");
	scanf("%d", &age);

	// ������ 
	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf("%f", &weight);

	// Ű
	double height;
	printf("Ű�� �� cm����? ");
	scanf("%lf", &height);

	//���˸� 
	char what[256];
	printf("� ���˸� ���������? ");
	scanf("%s", what);

	// ���� ���� ��� 
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�    : %s\n", name);
	printf("����    : %d\n", age);
	printf("������  : %.1f\n", weight);
	printf("Ű      : %.1lf\n", height);
	printf("���˸�  : %s\n", what);

}
