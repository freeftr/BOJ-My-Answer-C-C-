#include <stdio.h>

int main()
{
	int N, K;
	int n = 1, nk=1, k=1;
	
	scanf_s("%d %d", &N, &K);
	for (int i = 1; i <= N; i++)
	{
		n *= i;
	}
	for (int i = 1; i <= K; i++) {
		k *= i;
	}
	for (int i = 1; i <= N - K; i++) {
		nk *= i;
	}

	printf("%d", n / (nk * k));
}