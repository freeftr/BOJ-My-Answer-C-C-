#include <stdio.h>

//�Ҽ����� �Ǻ��ϴ� �Լ�
int decimal(long long n)
{
	for (long long int i = 2; i*i<=n; i++) 
	{
		//���������� i�� long long���� �����ϰ� �ð��ʰ��� ���̱� ����
		//����� �������� �߽����� ��Ī�̴� �����ٱ����� ���
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
	//�־��� ������ �����ϱ� ���� long long���� ����

	scanf_s("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf_s("%lld", &n);
		if (n == 1|| n == 0)
		{
			//0�� 1�� ����ó��
			printf("2\n");
		}
		else if (decimal(n) == 0)
		{
			//������ �Ҽ��� ��� ó��
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