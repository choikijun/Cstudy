#include <stdio.h>
#include <stdlib.h>


int main()//int�� ��ȯŸ���̴� int�� ��ȯŸ���� ������ return���� �����̱� �����̴�.
{
	int i;
	for (i = 0; i < 11; i++)
	{	
		if (i % 2 == 0)
		{
			printf("%d <- ¦��\n", i);
		}
		else if (i % 2 == 1)
		{
			printf("%d <- Ȧ��\n",i);
		}
	}
	system("pause");
	return 0;
}