#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//   1번
/*void main()
{
	int i, j;
	
	srand(time(NULL));

	while (1)
	{
		i = rand() % 9 + 1;
		j = rand() % 9 + 1;
		printf("%d * %d = %d\n", i, j, i * j);
		Sleep(1000);
	}
}*/
//   2번
/*void main()
{
	char ch;

	while (!_kbhit())
	{
		putchar('?');
		Sleep(500);
	}
	while ((ch = _getch()) != 'c')
	{
		putchar('#');
	}
}*/
//   3번
/*void main()
{
	char str[50];
	int num, a_num;
	
	while (1)
	{
		num = 0;
		a_num = 0;
		gets(str);
		while (str[num] != '\0')
		{
			if (str[num] == 'a') a_num++;
			num++;
		}
		printf("문자 개수 : %d 'a' 개수 : %d \n", num, a_num);
	}
}*/
//   4번
/*void main()
{
	char str[50];
	int i, j, k;

	while (1)
	{
		i = j = k = 0;
		
		gets(str);

		while (str[i] != '\0')
			i++;

		for (j = i;j >=0 ;j--)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
}*/