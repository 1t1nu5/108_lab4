#include <stdio.h>
int main()
{
	int prime[50000] = {}, target, max = 0, j, find = 2;
	prime[0] = 2;
	scanf("%d", &target);
	while (find < target && find <= 100050)
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
		prime[max+1] = find;
		max++;
	}
	if (target != prime[max])
	{
		loop:
			find++;
		j = max;
		while (j >= 0)
		{
			if (find%prime[j] == 0)
			{
				goto loop;
			}
			j--;
		}
		prime[max] = find;
		printf("%d %d", prime[max-1], prime[max]);
		return 0;
	}
	else
	{
		printf("%d", find);
		return 0;
	}
}
