#include <stdio.h>
#define N 5

//선택 정렬 함수
void selection_sort(int arr[], int length)
{
    int i,j,tmp;
    
    for(i = 0; i < length - 1; i++){
        for(j = i + 1; j < length; j++){
            if(arr[j] < arr[i]){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

//메인 함수
int main(void)
{
    int arr1[N] = {};
    int arr2[N] = {};
    int my_boolean = 0;
    int a, b = 0;
    
    //수 쌍 입력받기
    printf("=== Test Anagram ===\n");
    printf("첫번째 수를 입력해주세요. (5자리): ");
    scanf("%d", &a);
    printf("두번째 수를 입력해주세요. (5자리): ");
    scanf("%d", &b);
    printf("\n=== Test %d %d ===\n",a,b);
    
    //입력받은 수 쌍을 각 배열에 저장하기
    for(int i = N - 1; i >= 0; i--){
        arr1[i] = a%10;
        arr2[i] = b%10;
        a /= 10;
        b /= 10;
    }
    
    //입력 받은 수로 만들어진 두 배열을 정렬
    selection_sort(arr1, N);
    selection_sort(arr2, N);
    
    //오름차순 정렬된 두 배열의 요소를 비교
    for(int i = 0 ; i < N ; i++)
    {
        if (arr1[i] != arr2[i])
            my_boolean += 1;
    }
    
    if(my_boolean == 0)
        printf("Result : True\n\n");
    else
        printf("Result : False\n\n");
}
