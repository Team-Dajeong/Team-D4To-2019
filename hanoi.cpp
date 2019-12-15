#include<stdio.h>

void Hanoi(int n, char from,char by, char to)
{
	if(n == 1)
	{
		printf("1�� ������ %c ���� %c �� �̵�\n",from,to);
	}
	else
	{
		Hanoi(n-1,from,to,by);
		printf("%d�� ������ %c���� %c�� �̵�\n",n,from,to);
		Hanoi(n-1,by,from,to);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	Hanoi(n,'A','B','C');
	
	return 0;
}
