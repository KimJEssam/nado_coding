#include <time.h>                                   // 헤더 파일 추가
#include <stdlib.h>                                 // 헤더 파일 추가
#include <stdio.h>

main() { 
    srand(time(NULL)); 								// 난수 초기화
    int num = rand() % 100 + 1; 					// 난수 생성하기(1~100 숫자 반환)
    printf("정답 : %d\n", num); 					// 정답 출력
    int answer = 0; 								// 입력한 숫자를 저장할 변수
    int chance = 5; 								// 답변 기회

    while (1){ 										// chance > 0 ? 정답을 맞힐 때까지 반복 
        printf("남은 기회 %d번\n", chance--); 		// 답변 기회 차감
        printf("숫자를 맞혀 보세요.(1~100) : "); 	
        scanf("%d", &answer); 					// 숫자 입력받기
        if (answer > num) { 						
            printf("DOWN ↓\n\n");
        } else if (answer < num) { 					
            printf("UP ↑\n\n");
        } else if (answer == num) { 				
            printf("정답입니다!\n\n");
            break; 
        } else { 									// 예외 상황 대비 
            printf("알 수 없는 오류가 발생했어요.\n\n");
        } 
        if (chance == 0) { 							// 5번 안에 정답을 맞히지 못했을 때
            printf("모든 기회를 사용했어요. 아쉽게도 실패했습니다.\n");
            break; 
        }
    }
}
