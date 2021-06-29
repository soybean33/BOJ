#include<stdio.h>
#include<algorithm>
using namespace std;
char input[51][51];
int cnt_W, cnt_B, mincnt = 100;

void f(int y, int x)
{
	int i, j;
	cnt_W = 0, cnt_B = 0;
	for (i = y; i < y + 8; i++)
	{
		for (j = x; j < x + 8; j++)
		{
			if ((i + j) % 2 == 0 && input[i][j] != 'W')
				cnt_W++;
			if ((i + j) % 2 == 1 && input[i][j] != 'B')
				cnt_W++;
			if ((i + j) % 2 == 0 && input[i][j] != 'B')
				cnt_B++;
			if ((i + j) % 2 == 1 && input[i][j] != 'W')
				cnt_B++;
		}
	}
	if (min(cnt_B, cnt_W) < mincnt)
		mincnt = min(cnt_B, cnt_W);
}

int main(void)
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &input[i]);
	}
	for (i = 0; i < n - 7; i++)
	{
		for (j = 0; j < m - 7; j++)
		{
			f(i, j);
		}
	}
	printf("%d", mincnt);
	return 0;
}