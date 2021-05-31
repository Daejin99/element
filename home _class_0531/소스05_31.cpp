#include <stdio.h>
/*void main()
{
	int i;
	int M[5];

	M[0] = 1;
	M[1] = 2;
	M[2] = 3;
	M[3] = 4;
	M[4] = 5;

	for (i = 0; i < 5; i++)
		printf("M[%d]=%d\n", i, M[i]);
}*/
/*void main()
{
	int data[5], sum = 0, i;

	for (i = 0;i <= 4; i++)
	{
		printf("\n 정수 입력.");
		scanf_s("%d", &data[i]);
		sum += data[i];
	}
printf("\n 총합계: %d \n", sum);
}*/
/*void main()
{
	int M[] = { 2,1,5,7,6 };
	int i = 0, sum = 0, array_size;
	float avg;

	array_size = sizeof(M) / sizeof(int);
	for (i = 0; i < array_size; i++) sum += M[i];

	avg = (float)sum / (float)array_size;

	printf("배열 데이터 개수: %d \n", array_size);
	printf("배열 데이터 평균 값: %.2f\n", avg);
}*/
/*void main()

{
	int M[5];
	int i, max = 0;
	for (i = 0; i <= 4; i++)
	{
		printf("정수 입력하시오 : ");
		scanf_s("%d", &M[i]);
	}
	for (i = 0; i <= 4; i++) {
		if (M[i] > max) max = M[i];
	}
	printf("\n 최대값은 %d \n", max);
}
*/
/*
#include <stdlib.h> // system( ) : 시스템 명령어 전달
#include <time.h> // _strdate_s( ) / _strtime_s( ) : 현재 날짜/시간 문자열 저장
#include <windows.h>

void main()
{
	char _date[10], _time[10];

	while (1)
	{
		_strdate_s(_date, 10);
		_strtime_s(_time, 10);

		printf("%s \n", _date);
		printf("%s \n", _time);
		Sleep(1000);
	}
}
*/

/*void bubblesort(int data[], int n);

void main()
{
	int i;
	int M[] = { 5, 9, 2, 7, 1, 10, 4, 6, 8, 3 };

	bubblesort(M, sizeof(M) / sizeof(int));

	for (i = 0; i < sizeof(M) / sizeof(int);i++)
	{
		printf("M[%d]=%d \n", i, M[i]);
	}
}
	void bubblesort(int data[], int n)
	{
		int i, j, temp;

		for (j = n - 1;j >= 0;j--) {
			for (i = 0; i < j;i++) {
				if (data[i] < data[i + 1]){
					temp= data[i];
					data[i] = data[i + 1];
					data[i + 1] = temp;
				}
			}
		}
	}*/

/*#define _CRT_SECURE_NO_WARNINGS //fopen( ) 함수를 사용하기 위한 주문

void main()
{
	FILE* fp_r = fopen("c:\\Temp\\in.txt", "r");
	FILE* fp_w = fopen("c:\\Temp\\out.txt", "w");
	char input[50] = { 0 }, data[50] = "KPU Mechatronics C Programming";
	
	fread(input, 1, 50, fp_r);
	printf("%s", input);
	
	fprintf(fp_w, "%s", data);
	
	fclose(fp_r);
	fclose(fp_w);
}*/
/*void main()
{
	int i, j, sum = 0;
	int M[2][3] = { {1,2,3},
					{10,20,30} };
	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 3;j++) {
			sum = sum + M[i][j];
			printf("M[%d][%d]=%d\n", i, j, M[i][j]);
		}
	}printf("\n");
	printf("총합=%d\n", sum);
}*/
/*void main()
{
	int i, j;
	char M[2][5] = { {'k','o','r','e','a'},{'K','O','R','E','A'} };

	for (i = 0;i <= 1;i++)
	{
		for (j = 4;j >=0 ; j--)
		{
			printf("M[%d][%d] = %c \n", i, j, M[i][j]);
		}
	}
}
*/

/*void main()
{
	char M[] = "KOREA";

	printf("문자열 출력 : %s \n", M);
	printf("문자배열 출력 : %c%c%c%c%c%c \n", M[0], M[1], M[2], M[3], M[4], M[5]);
}*/

/*void main()
{
	int i;
	char M[][10] = { "KPU", "Mecha","C Program" };

	for (i = 0;i < 3;i++)
	{
		printf("%s \n", M[i]);
	}printf("%c \n", M[1][3]);
}*/

/*void main()
{
	char str[] = "KPU Mechatronics";
	int i = 0, num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'c') num++;
		i++;
	}
	printf("%c \n", str[10]);
	printf("%s \n", str);
	printf("문자열 중 문자 개수 = %d \n", i);
	printf("문자열 중 'c' 개수 = %d \n", num);
}*/

/*void main()
{
	char str[100];

	gets_s(str);
	puts(str);

}
*/
/*void main()
{
	char str[100];
	int i, num;

	while (1)
	{
		gets_s(str);
		i = 0; num = 0;
		while (str[i] != '\0')
		{
			if (str[i] == 'e') num++;
			i++;
		}
		printf("%d \n", i);
		printf("%d \n", num);
	}
}
*/