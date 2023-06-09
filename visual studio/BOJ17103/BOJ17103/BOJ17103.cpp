#include <stdio.h>

int main()
{
	int T, N, cnt=0;
	int erasprime[1000001];

	//에라토스테네스의 체 소수 배열에 넣기
	for (int i = 2; i < 1000001; i++)
	{
		erasprime[i] = i;
	}
	for (int i = 2; i <= 1000001; i++)
	{
		for (int j = 2; j * i <= 1000001; j++)
		{
			erasprime[i * j] = 0;
		}
	}

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		cnt = 0;
		scanf_s("%d", &N);
		for (int j = 2; j <= N/2; j++)
		{
			if (erasprime[j] + erasprime[N - j] == N)
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}