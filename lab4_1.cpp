#include <stdio.h>
#include <string.h>
int main()
{
	char cmfg[7], cexp[7];
	int imfg[3], iexp[3];
	scanf("%s", cmfg);
	scanf("%s", cexp);
	for (int i = 0; i < 6; i++)
	{
		cmfg[i] -= '0';
	}
	for (int i = 0; i < 6; i++)
	{
		cexp[i] -= '0';
	}
	return 0;
}
