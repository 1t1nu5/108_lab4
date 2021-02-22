#include <stdio.h>
int main()
{
	int cont;
	scanf("%d", &cont);
	int score[cont] = {}, receive;
	int temp[cont];
	bool f = false;
	for (int i = 0; i < cont; i++)
	{
		for (int k = 0; k < cont; k++)
		{
			temp[k] = 0;
		}
		for (int j = 0; j < cont; j++)
		{
			if (j == i)
			{
				continue;
			}
			scanf("%d ", &receive);
			if (receive >= 1 && receive <= 5)
			{
				temp[j] += receive;
			}
			else
			{
				f = true;
			}
		}
		if (f == false)
		{
			for (int j = 0; j < cont; j++)
			{
				score[j] += temp[j];
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
