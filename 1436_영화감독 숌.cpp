#include<stdio.h>
#include<math.h>
int main(void)
{
	int i, j, n, id = 0, num = 665;
	scanf("%d", &n);
	while (1)
	{
		if (id == n)
		{
			break;
		}
		num++;
		for (i = 0; i <= 9; i++)
		{
			if (num / int(pow(10, i)) % 1000 == 666)
			{
				id++;
				break;
			}
		}
	}
	printf("%d", num);
	return 0;
}