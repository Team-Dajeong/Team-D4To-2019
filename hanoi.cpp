#include<stdio.h>

void Hanoi(int n, char from,char by, char to)
{
	if(n == 1)
	{
		printf("1번 원반을 %c 에서 %c 로 이동\n",from,to);
	}
	else
	{
		Hanoi(n-1,from,to,by);
		printf("%d번 원반을 %c에서 %c로 이동\n",n,from,to);
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
