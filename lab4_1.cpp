#include <stdio.h>
#include <string.h>
int main()
{
	char cmfg[7], cexp[7];
	int imfg[4], iexp[4];
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
	iexp[0] = 10*cexp[0]+cexp[1];
	iexp[1] = 10*cexp[2]+cexp[3];
	iexp[2] = 10*cexp[4]+cexp[5];
	imfg[3] = imfg[0]+30*imfg[1]+360*imfg[2];
	iexp[3] = iexp[0]+30*iexp[1]+360*iexp[2];
	int result = iexp[3] - imfg[3];
	int remain[3];
	if (result > 0)
	{
		remain[2] = result%360;
		result -= remain[2]*360;
		remain[1] = result%30;
		result -= remain[1]*30;
		remain[0] = result;
		printf("%d %d %d", remain[0], remain[1], remain[2]);
	}
	else
	{
		printf("EXP before MFG");
	}
	return 0;
}
