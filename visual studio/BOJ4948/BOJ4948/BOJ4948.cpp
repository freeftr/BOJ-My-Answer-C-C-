#include <stdio.h>

int decimal(int n)
{
	//소수 판별하기
	for (int i = 2; i*i <=n; i++)
	{
	//제곱근까지 계산통해 시간단축
		if (n % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int n;

	while (1)
	{
		int cnt = 0;
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		for (int i = n+1; i <= 2*n; i++)
		{
			if (decimal(i) == 0)
			{
				if (i != 1)
				{
					//1은예외처리
					cnt++;
					//소수의 개수 카운트
				}
			}
		}
		printf("%d\n", cnt);
	}
}