#include <stdio.h>

//소수인지 판별하는 함수
int decimal(long long n)
{
	for (long long int i = 2; i*i<=n; i++) 
	{
		//마찬가지로 i도 long long으로 선언하고 시간초과를 줄이기 위해
		//약수는 제곱근을 중심으로 대칭이니 제곱근까지만 계산
		if (n % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int  t;
	long long n;
	//주어진 범위를 만족하기 위해 long long으로 선언

	scanf_s("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf_s("%lld", &n);
		if (n == 1|| n == 0)
		{
			//0과 1의 예외처리
			printf("2\n");
		}
		else if (decimal(n) == 0)
		{
			//본인이 소수일 경우 처리
			printf("%lld\n", n);
		}
		else
		{
			while (decimal(n) == 1)
			{
				n++;
			}
			printf("%lld\n", n);
		}
	}
}