#include <time.h>                                   // ��� ���� �߰�
#include <stdlib.h>                                 // ��� ���� �߰�
#include <stdio.h>

main() { 
    srand(time(NULL)); 								// ���� �ʱ�ȭ
    int num = rand() % 100 + 1; 					// ���� �����ϱ�(1~100 ���� ��ȯ)
    printf("���� : %d\n", num); 					// ���� ���
    int answer = 0; 								// �Է��� ���ڸ� ������ ����
    int chance = 5; 								// �亯 ��ȸ

    while (1){ 										// chance > 0 ? ������ ���� ������ �ݺ� 
        printf("���� ��ȸ %d��\n", chance--); 		// �亯 ��ȸ ����
        printf("���ڸ� ���� ������.(1~100) : "); 	
        scanf("%d", &answer); 					// ���� �Է¹ޱ�
        if (answer > num) { 						
            printf("DOWN ��\n\n");
        } else if (answer < num) { 					
            printf("UP ��\n\n");
        } else if (answer == num) { 				
            printf("�����Դϴ�!\n\n");
            break; 
        } else { 									// ���� ��Ȳ ��� 
            printf("�� �� ���� ������ �߻��߾��.\n\n");
        } 
        if (chance == 0) { 							// 5�� �ȿ� ������ ������ ������ ��
            printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
            break; 
        }
    }
}
