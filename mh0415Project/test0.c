#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

void main()
{
	char a[] = "audgh";
	char b[] = "audgh";

	printf("%d", strcmp(a, b));
}