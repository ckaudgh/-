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
        printf("����Ͻ� ��й�ȣ�� �Է��ϼ���(�ִ� 10�ڸ�) : ");
        scanf("%s", pass1);
        printf("�ѹ� �� �Է��ϼ��� : ");
        scanf("%s", pass2);
        if (strcmp(pass1, pass2))
        {
            printf("�Է��Ͻ� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
            i = 1;
        }
        else
        {
            printf("��й�ȣ�� ��ϵǾ����ϴ�.\n");
            Sleep(1000);
            system("cls");
            break;
        }
    }
    for (i = 1;i < 10;i++)
    {
        printf("��й�ȣ�� �Է��ϼ��� : ");
        scanf("%s", user);
        if (strcmp(pass1, user))
        {
            j += 1;
            printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.(Ʋ�� Ƚ�� : %d)\n", j);
            i = 1;
            if (j == 5)
            {
                printf("��й�ȣ�� 5ȸ Ʋ�� ���α׷��� �����մϴ�.");
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

                printf("���Ͻô� ��ȣ�� ������ �ּ���\n(1�޷� >> 1351.27��)\n");
                printf("1) �� <--> �޷� ��ȯ\n");
                printf("2) �޷� <--> �� ��ȯ\n");
                printf("3) ����\n");
                scanf("%d", &a);
                if (a == 1)
                {
                    system("cls");
                    printf("���Ͻô� �ݾ��� �Է��ϼ���(��) : ");
                    scanf("%d", &won);
                    printf("\n%d �� --> %.4f �޷�\n", won, won / dol);
                    printf("�ڷ� ���⸦ ���Ͻø� 1���� �����ּ���.\n");
                    scanf("%d", &num);
                    switch (num)
                    {
                    case 1:
                        b = 1;
                        break;
                    default:
                        b = 5;
                        i = 10;
                        printf("����\n");
                    }
                }
                else if (a == 2)
                {
                    system("cls");
                    printf("���Ͻô� �ݾ��� �Է��ϼ���(��) : ");
                    scanf("%d", &usd);
                    printf("\n%d �޷� --> %.4f ��\n", usd, usd * dol);
                    printf("�ڷ� ���⸦ ���Ͻø� 1���� �����ּ���.\n");
                    scanf("%d", &num);
                    switch (num)
                    {
                    case 1:
                        b = 1;
                        break;
                    default:
                        b = 5;
                        i = 10;
                        printf("����\n");
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
