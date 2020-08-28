#include <stdio.h>
#define true 1
#define false 0
#define N 9

int main(void)
{
    printf("학 점 프 로 그 램\n");
    printf("(종료를 원하시면 999를 입력)\n\n");
    
    int score;
    char grd[2] = {}; //출력될 학점을 저장할 배열
    
    //학점 테이블 구성을 위해 두 개의 다른 자료형의 배열 생성
    //생성된 두 개의 배열은 63번째 라인 else if 안에서 인덱스를 통해 연관짓도록 합니다.
    char grades[N][2] = {
        {'A','+'},
        {'A'},
        {'B','+'},
        {'B'},
        {'C','+'},
        {'C'},
        {'D','+'},
        {'D'},
        {'F'},
    };
    int scores[N] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
    
    //학점테이블 출력
    printf("[학점테이블]\n");
    
    printf("점수 : ");
    for(int i = 0 ; i < N ; i++)
    {
        printf("%i    ",scores[i]);
    }
    printf("\n");
    
    printf("학점 : ");
    for(int i = 0 ; i < N ; i++)
    {
        if(i%2 == 1)
        {
            printf(" "); //단순히 점수와 학점간 출력 간격 조정을 위한 코드입니다.
        }
        printf("%c%c    ",grades[i][0], grades[i][1]);
    }
    printf("\n\n");
    
    //무한루프를 의도적으로 만들어 사용자가 종료를 원할때 까지 프로그램이 반복 실행되도록 함
    while(true){
        printf("성적을 입력하세요 (0~100) : ");
        
        //사용자의 입력값을 받는 scanf 함수
        scanf("%d", &score);
        
        //사용자의 입력값이 999면 바로 return으로 main함수를 종료합니다.
        if(score == 999)
        {
            return 0;
        }
        //정상적인 성적 입력시 작동 부분
        else if (score >= 0 && score <= 100)
        {
            //for문을 통해 A+부터 F까지 진행하며 해당하는 학점을 출력하도록 하고 출력 이후엔 break
            for(int i = 0 ; i < N ; i++)
            {
                if(score >= scores[i])
                {
                    grd[0] = grades[i][0];
                    grd[1] = grades[i][1];
                    
                    printf("학점은 %c%c 입니다.\n\n",grd[0],grd[1]);
                    break;
                }
            }
        }
        //비정상적인 성적 입력시 작동 부분
        else
        {
            printf("비정상적인 성적 입력입니다. (범위는 0에서 100까지만 허용합니다.) \n\n");
        }
    }
}
