#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

void main()
{
    char pass1[10];
    char pass2[10];
    char user[10];
    int a, b, i, j = 0;
    int won, usd, num;
    float dol = 1351.27;

    for (i = 1;i < 10;i++)
    {
        printf("등록하실 비밀번호를 입력하세요(최대 10자리) : ");
        scanf("%s", pass1);
        printf("한번 더 입력하세요 : ");
        scanf("%s", pass2);
        if (strcmp(pass1, pass2))
        {
            printf("입력하신 비밀번호와 일치하지 않습니다.\n");
            i = 1;
        }
        else
        {
            printf("비밀번호가 등록되었습니다.\n");
            Sleep(1000);
            system("cls");
            break;
        }
    }
    for (i = 1;i < 10;i++)
    {
        printf("비밀번호를 입력하세요 : ");
        scanf("%s", user);
        if (strcmp(pass1, user))
        {
            j += 1;
            printf("비밀번호가 일치하지 않습니다.(틀린 횟수 : %d)\n", j);
            i = 1;
            if (j == 5)
            {
                printf("비밀번호를 5회 틀려 프로그램을 종료합니다.");
                break;
            }
        }
        else
        {
            printf("Login");
            Sleep(1000);
            for (b = 0;b < 5;b++)
            {
                system("cls");

                printf("원하시는 번호를 선택해 주세요\n(1달러 >> 1351.27원)\n");
                printf("1) 원 <--> 달러 변환\n");
                printf("2) 달러 <--> 원 변환\n");
                printf("3) 종료\n");
                scanf("%d", &a);
                if (a == 1)
                {
                    system("cls");
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
                        i = 10;
                        printf("종료\n");
                    }
                }
                else if (a == 2)
                {
                    system("cls");
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
                        b = 5;
                        i = 10;
                        printf("종료\n");
                    }
                }
                else if (a == 3)
                {
                    i = 10;
                    break;
                }
            }
        }
    }
}
