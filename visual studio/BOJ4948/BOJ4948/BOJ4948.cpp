#include <stdio.h>

int decimal(int n)
{
	//�Ҽ� �Ǻ��ϱ�
	for (int i = 2; i*i <=n; i++)
	{
	//�����ٱ��� ������� �ð�����
		if (n % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int n;

	while (1)
	{
		int cnt = 0;
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		for (int i = n+1; i <= 2*n; i++)
		{
			if (decimal(i) == 0)
			{
				if (i != 1)
				{
					//1������ó��
					cnt++;
					//�Ҽ��� ���� ī��Ʈ
				}
			}
		}
		printf("%d\n", cnt);
	}
}