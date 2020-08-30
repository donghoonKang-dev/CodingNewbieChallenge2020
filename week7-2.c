#include <stdio.h>
#include <stdlib.h>

int *divisor;

int compare(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int N;
    printf("약수의 갯수를 입력해주세요 : ");
    scanf("%d", &N);
    printf("\n");
    
    divisor = malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        int tmp;
        printf("약수를 입력해주세요 (%d개 중 %d개 입력중) : ", N, i+1);
        scanf("%d", &tmp);
        divisor[i] = tmp;
    }
    printf("\n");

    qsort(divisor, N, sizeof(int), compare);

    int answer = divisor[1] * divisor[N-2];
    printf("해당 약수들을 가지는 수는 %d 입니다.\n", answer);

    return 0;
}

