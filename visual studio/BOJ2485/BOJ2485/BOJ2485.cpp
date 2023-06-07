#include <stdio.h>

int maxdivide(int a, int b)
{
	if (b == 0)
		return a;
	return maxdivide(b, a % b);
}

int main()
{
	int N, input[100001] = { 0 }, tree[100001] = {0};

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &input[i]);
	}
	int first = input[0];
	int last = input[N - 1];
	for (int i = 1; i < N; i++)
	{
		tree[i] = input[i] - input[i-1];
	}
	for (int i = 2; i < N; i++)
	{
		tree[i] = maxdivide(tree[i], tree[i-1]);
	}
	printf("%d", (last - first) / tree[N - 1] - N + 1);
}