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
	imfg[0] = 10*cmfg[0]+cmfg[1];
	imfg[1] = 10*cmfg[2]+cmfg[3];
	imfg[2] = 10*cmfg[4]+cmfg[5];
	printf("%d %d %d", imfg[0], imfg[1], imfg[2]);
	return 0;
}
