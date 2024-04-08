# -
중간 프로젝트 코드 차명호
code 눌러서 볼 수 있음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

//pass1 = pass2 했을때 계속 0이 떠서  strcmp(a,b)로 비교 >> 문자열 비교
//Sleep, system >> 출력이 계속 나오면 지저분해 보여서 Sleep으로 딜레이 넣어 보여지는 시간 늘리고
//system("cls")로 이때까지 나온 모든 출력 지운 다음 다시 출력.

void main()
{
    char pass1[10];
    char pass2[10];
    char user[10];
    int a, b, i, j = 0;
    int won, usd, num;
    float dol=1351.27;

    for (i = 1;i < 10;i++) //반복문 1-1
    {
        printf("등록하실 비밀번호를 입력하세요(최대 10자리) : ");
        scanf("%s", pass1);
        printf("한번 더 입력하세요 : ");
        scanf("%s", pass2);
        if (strcmp(pass1, pass2))//strcmp(a,b) = 문자열 a,b 비교
        {
            printf("입력하신 비밀번호와 일치하지 않습니다.\n");
            i = 1;//i를 1로 만들어 주면서 반복분 처음부터 다시 만약 i가 계속 1이라면 무한 반복.
        }
        else
        {
            printf("비밀번호가 등록되었습니다.\n");
            Sleep(1000);//Sleep 단위는 1ms로 1000을 적으면 1초가 된다.
            system("cls");//모든 출력을 지운다;
            break;
        }
    }
    for (i = 1;i < 10;i++) //반복문 1-2
    {
        printf("비밀번호를 입력하세요 : ");
        scanf("%s", user);
        if (strcmp(pass1, user))
        {
            j += 1;
            printf("비밀번호가 일치하지 않습니다.(틀린 횟수 : %d)\n",j);
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
            for (b = 0;b < 5;b++) //반복문 2
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
                    switch (num) //if 문 써도 상관없다.
                    {
                    case 1:
                        b = 1;
                        break;
                    default:
                        b = 5;//두번째 반복문 조건인 b를 5로 만들어서 반복문 종료
                        i = 10; //첫번째 반복문 조건인 i를10으로 만들어서 반복문 종료
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
