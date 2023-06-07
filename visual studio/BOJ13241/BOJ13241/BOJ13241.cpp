#include <stdio.h>

long long int maxdivide(long long int a,long long int b)
{
	if (b == 0)
	{
		return a;
	}
	return maxdivide(b, a % b);
}

int main()
{
	long long int A, B;

	scanf_s("%lld %lld", &A, &B);

	printf("%lld", A * B / maxdivide(A, B));
}