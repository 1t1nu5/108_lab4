#include <stdio.h>
int main()
{
	int cont;
	scanf("%d", &cont);
	int score[cont, receive];
	for (int i = 0; i < cont; i++)
	{
		for (j = 0; j < cont; j++)
		{
			if (j == i)
			{
				continue;
			}
			scanf("%d ", &receive);
			if (receive >= 1 && receive <= 5)
			{
				score[j] = receive;
			}
		}
	}
	
	return 0;
}
