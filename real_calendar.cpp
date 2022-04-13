#include <stdio.h>

int main() {
	
	int baseYear = 1900;
	int baseMonth = 1;
	int year, month;
	int dm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int baseSum = 365;
	int ts = 0;
	int cnt = 0;
	
	printf("년도 입력: ");
	scanf("%d", &year);
	printf("월 입력: ");
	scanf("%d", &month);
	
	
	for (int i = 1900; i<= year; i++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			dm[1] = dm[1] + 1;		
			cnt = cnt + 1;
		}
		printf("%d\n", ts);
	
	}
		
	ts = (year - baseYear) * 365 + cnt;

	
	 
	int dOw = ts % 7;
	
	printf("============= %d년 %d월 =============\n", year, month);
	printf("일    월    화    수    목    금    토\n");
	
	if (dOw == 0)
	{
		for(int i = month; i <= dm[month - 1]; i++)
		{
			printf("%d ", i);
			if(i % 7 == 0)
			{
				printf("\n");
			}
		}
	} else if (dOw == 1)
	{
		for(int i = month; i <= dm[month - 1]; i++)
		{
		//	printf(" ");
			printf("%d  ", i);
			if (i == 6 || i == 13 || i == 20 || i == 27)
			{
				printf("\n");
			}
		}
	} else if (dOw == 2)
	{
		for(int i = month; i <= dm[month - 1]; i++)
		{
		//	printf("  ");
			printf("%d ", i);
			if (i == 5 || i == 12 || i == 19 || i == 26)
			{
				printf("\n");
			}
		}
	} else if (dOw == 3)
	{
		for(int i = month; i <= dm[month - 1]; i++)
		{
		//	printf("   ");
			printf("%d ", i);
			if (i == 5 || i == 12 || i == 19 || i == 26)
			{
				printf("\n");
			}
		}
	} else if (dOw == 4)
	{
		printf("                        ");
		for(int i = month; i <= dm[month - 1]; i++)
		{
			printf("%d     ", i);
			if (i == 4 || i == 11 || i == 18 || i == 25)
			{
				printf("\n");
			}
		}
	} else if (dOw == 5)
	{
		for(int i = month; i <= dm[month - 1]; i++)
		{
			printf("     ");
			printf("%d ", i);
			if (i == 3 || i == 10 || i == 17 || i == 24)
			{
				printf("\n");
			}
		}
	} else if (dOw == 6)
	{
		for(int i = month; i <= dm[month - 1]; i++)
		{
			printf("      ");
			printf("%d ", i);
			if (i == 2 || i == 9 || i == 16 || i == 23)
			{
				printf("\n");
			}
		}
	}
	
}
