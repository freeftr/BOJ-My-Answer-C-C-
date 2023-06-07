#include <stdio.h>

int decimal(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int T, N;
	
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int cnt = 0;

		scanf_s("%d", &N);
		for (int j = 2; j <= N/2; j++)
		{
			if (decimal(j) == 0 && decimal(N-j)==0)
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}