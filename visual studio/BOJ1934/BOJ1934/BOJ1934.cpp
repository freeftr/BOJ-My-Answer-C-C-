#include <stdio.h>

int maxdivide(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return maxdivide(b, a % b);
}

int main()
{
	int T, A, B;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A*B/maxdivide(A, B));
	}
}