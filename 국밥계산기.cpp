#include<stdio.h>

int main()
{
	int a,b;
	printf("국밥의 가격을 입력하세요\n");
	scanf("%d",&a);
	printf("쓸데없는 것의 가격을 입력하세요\n");
	scanf("%d",&b);
	printf("%d 국밥이 가능합니다",b/a);
	return 0; 
}
