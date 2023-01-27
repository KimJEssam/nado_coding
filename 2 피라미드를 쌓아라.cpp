#include <stdio.h> 
main() {
    int floor;
    printf("몇 층으로 쌓겠습니까?(5~100) ");
    scanf("%d", &floor);
    for (int i = 0; i < floor; i++) {             // 입력받은 값(층)만큼 반복
        for (int j = i; j < floor - 1; j++) {     // 빈칸(S) 출력
            printf("S");                          // printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++) {     // 별표 출력
            printf("*");
        }
        printf("\n");                             // 줄바꿈(층 구분)
    }
}
