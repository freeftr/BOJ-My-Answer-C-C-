#include <stdio.h>
#define MAX 100001

int stack[MAX];
int top = -1;
//���� ����

int push(int a)
{
	//���ÿ� �ְ����ϴ� �� �ֱ�
	if (top >= MAX - 1)
		return -1;
	return stack[++top] = a;
}

int pop()
{
	//������ top�� �ִ� ���� ������
	if (top < 0)
	{
		return -1;
	}
	return stack[top--] = NULL;
}

int peek()
{
	//������ top���ִ� �� �о����
	return stack[top];
}

int main()
{
	char ans[MAX*2];
	//����� ũ�⼱��
	int n, input, index=1, ansindex=0, check=1;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &input);
		if (peek() < input)	//peek���� ���� ��� ���ϴ� ���� ���� ���ؼ��� ���ÿ� �־�����Ѵ�.
		{
			while (peek() < input)
			{
				push(index++);
				ans[ansindex++] = '+';
			}
			pop();
			ans[ansindex++] = '-';
		}
		if (peek() == input) //peek ���� ������ ��� ���ٸ� �ൿ �ʿ���� �ٷ� pop
		{
			pop();
			ans[ansindex++] = '-';
		}
		if (peek()>input) // ���� peek���� �� ū ��� ������ ���� �����Ƿ� 1�� �����س��Ҵ� check�� 0���� ����
		{
			check = 0;
		}
	}
	if (check == 1)		//check���� ���� NO�� ������� ���ڿ��� ������� �Ǵ�
	{
		for (int i = 0; i < ansindex; i++)
		{
			printf("%c\n", ans[i]);
		}
	}
	else
		printf("NO\n");

}