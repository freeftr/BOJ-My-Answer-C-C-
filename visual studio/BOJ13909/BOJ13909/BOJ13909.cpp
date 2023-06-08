#include <stdio.h>

int main()
{
	int N, cnt = 0;

	scanf_s("%d", &N);

	for (int i = 1; i*i <= N; i++)
	{
		cnt++;
	}
	printf("%d", cnt);
}