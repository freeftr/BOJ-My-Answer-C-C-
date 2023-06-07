#include <stdio.h>

int decimal(int n)
{
	//소수를 판별하는 함수
	for (int i = 2; i * i <= n; i++)
	{
		//제곱근까지만 계산함으로서 시간단축
		if (n % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int M, N;

	scanf_s("%d %d", &M, &N);
	for (int i = M; i <= N; i++)
	{
		if (i == 1)
		{
			//1의 예외처리
			continue;
		}
		else if (decimal(i) == 0)
		{
			printf("%d\n", i);
		}
	}
}