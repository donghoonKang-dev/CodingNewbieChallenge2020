#include <stdio.h>
#include <math.h>
#define MAX 100

int main(void)
{
    float sum = 0;
    int result = 0;
    int num = 0;
    int friends[MAX] = {};
    
    printf("몇 명의 친구들이 같은 거리에 있나요? : ");
    scanf("%d", &num);
    
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d 번째 친구 집의 위치는? : ", i+1);
        scanf("%d", &friends[i]);
    }
    
    //평균값 구하기 위한 sum 구하기
    for(int i = 0 ; i < num ; i++)
    {
        sum += (float)friends[i];
    }
    
    //sum을 num으로 나눠 평균값을 구하고 그것을 반올림하여 result에 저장
    result = round( sum/num );
    
    printf("\n");
    printf("%d (으)로 이사가시면 친구들과 가장 가까이 살 수 있어요!\n", result);
}
