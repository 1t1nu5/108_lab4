#include <stdio.h>
int main()
{
	int cont;
	scanf("%d", &cont);
	int score[cont], receive;
	for (int i = 0; i < cont; i++)
	{
		for (int j = 0; j < cont; j++)
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
			else
			{
				score[i] = -5*cont;
			}
		}
	}
	// reusage receive as max
	receive = score[0];
	int winner = 1;
	for (int i = 1; i < cont; i++)
	{
		if (score[i] > receive)
		{
			receive = score[i];
			winner = i+1;
		}
	}
	printf("%d", winner);
	return 0;
}
