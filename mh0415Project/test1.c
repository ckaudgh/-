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

        printf("���Ͻô� ��ȣ�� ������ �ּ���\n(1�޷� >> 1351.27��)\n");
        printf("1) �� <--> �޷� ��ȯ\n");
        printf("2) �޷� <--> �� ��ȯ\n");
        printf("3) ����\n");
        scanf("%d", &a);
        if (a == 1)
        {
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
                printf("����\n");
            }
        }
        else if (a == 2)
        {
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
                b=5;
                printf("����\n");
            }
        }
        else
        {
            b = 5;
            break;
        }
    }
    
}