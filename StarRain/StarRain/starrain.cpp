#include <stdio.h>
#include <stdlib.h>


int main()//int는 반환타입이다 int가 반환타입인 이유는 return값이 정수이기 떄문이다.
{
	int i;
	for (i = 0; i < 11; i++)
	{	
		if (i % 2 == 0)
		{
			printf("%d <- 짝수\n", i);
		}
		else if (i % 2 == 1)
		{
			printf("%d <- 홀수\n",i);
		}
	}
	system("pause");
	return 0;
}