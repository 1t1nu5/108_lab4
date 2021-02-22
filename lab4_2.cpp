#include <stdio.h>
int main()
{
	int prime[50000] = {}, target = 100000, max = 0, j, find = 2;
	prime[0] = 2;
	while (find < target && find <= 100000)
	{
		next:
			find++;
		j = max;
		while (j >= 0)
		{
			if (find%prime[j] == 0)
			{
				goto next;
			}
			j--;
		}
		printf("%d\n", find); //test
		prime[max+1] = find;
		max++;
	}
	return 0;
}
