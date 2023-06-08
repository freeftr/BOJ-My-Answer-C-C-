#include <stdio.h>

int main()
{
	int N, anw = 1;
	
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		anw *= i;
	}
	printf("%d", anw);
}