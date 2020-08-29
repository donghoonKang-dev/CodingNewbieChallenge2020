#include <stdio.h>

void sort(int n, int *arr)
{
    int i, j, tmp;

    for(i = n - 1 ; i > 0 ; i--)
    {
        for(j = 0 ; j < i ; j++)
        {
            if( *(arr+j) > *(arr+j+1) )
            {
                tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;
            }
        }
    }
}

int main(void)
{
    int n = 7;
    int arr[7] = { 0, 25, 10, 17, 6, 12, 9 };
    
    sort(n, arr);
    
    for(int i = 0 ; i < 7 ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
