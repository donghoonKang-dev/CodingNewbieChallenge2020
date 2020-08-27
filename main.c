#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int stock = 5;
    int price = 10000;
    int order = get_int("주문 수량을 입력하세요.\n");
    if (order <= stock)
    {
    printf ("주문건수 : %i건\n", order);
    printf ("기존 재고량 : %i개\n", stock);
    printf ("남은 재고량 : %i개\n", stock-order);
    printf ("매출액(부가세포함) : %.2f원\n", order*price*1.1);
    }
    else
    {
    printf ("재고가부족합니다. 기존 재고량: %i개\n", stock);
    }
    return 0;
}