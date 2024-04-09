#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

void main()
{
    int a, b, i, j = 0;
    int won, usd, num;
    float dol = 1351.27;

    for (b = 0;b < 5;b++)
    {
        printf("Login");
        Sleep(1000);
        system("cls");

        printf("원하시는 번호를 선택해 주세요\n(1달러 >> 1351.27원)\n");
        printf("1) 원 <--> 달러 변환\n");
        printf("2) 달러 <--> 원 변환\n");
        printf("3) 종료\n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("원하시는 금액을 입력하세요(원) : ");
            scanf("%d", &won);
            printf("\n%d 원 --> %.4f 달러\n", won, won / dol);
            printf("뒤로 가기를 원하시면 1번을 눌러주세요.\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                b = 1;
                break;
            default:
                b = 5;
                printf("종료\n");
            }
        }
        else if (a == 2)
        {
            printf("원하시는 금액을 입력하세요(원) : ");
            scanf("%d", &usd);
            printf("\n%d 달러 --> %.4f 원\n", usd, usd * dol);
            printf("뒤로 가기를 원하시면 1번을 눌러주세요.\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                b = 1;
                break;
            default:
                b=5;
                printf("종료\n");
            }
        }
        else
        {
            b = 5;
            break;
        }
    }
    
}