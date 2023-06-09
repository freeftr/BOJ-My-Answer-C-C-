#include <stdio.h>
#define MAX 100001

int stack[MAX];
int top = -1;
//스택 선언

int push(int a)
{
	//스택에 넣고자하는 값 넣기
	if (top >= MAX - 1)
		return -1;
	return stack[++top] = a;
}

int pop()
{
	//스택의 top에 있는 값을 빼오기
	if (top < 0)
	{
		return -1;
	}
	return stack[top--] = NULL;
}

int peek()
{
	//스택의 top에있는 값 읽어오기
	return stack[top];
}

int main()
{
	char ans[MAX*2];
	//충분한 크기선언
	int n, input, index=1, ansindex=0, check=1;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &input);
		if (peek() < input)	//peek값이 작을 경우 원하는 수를 빼기 위해서는 스택에 넣어줘야한다.
		{
			while (peek() < input)
			{
				push(index++);
				ans[ansindex++] = '+';
			}
			pop();
			ans[ansindex++] = '-';
		}
		if (peek() == input) //peek 값과 동일한 경우 별다른 행동 필요없이 바로 pop
		{
			pop();
			ans[ansindex++] = '-';
		}
		if (peek()>input) // 만약 peek값이 더 큰 경우 성립이 되지 않으므로 1로 선언해놓았던 check을 0으로 설정
		{
			check = 0;
		}
	}
	if (check == 1)		//check값에 따라 NO를 출력할지 문자열을 출력할지 판단
	{
		for (int i = 0; i < ansindex; i++)
		{
			printf("%c\n", ans[i]);
		}
	}
	else
		printf("NO\n");

}