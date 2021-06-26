#include<stdio.h>
int main(void)
{
	int n, k, i, j;
	unsigned long long sum = 1;
	scanf("%d %d", &n, &k);
	n--, k--;
	if (k > n - k)
		k = n - k;
	for (i = n, j = 0; j < k; i--, j++)
		sum *= i;
	for (i = 1; i <= k; i++)
		sum /= i;
	printf("%lld", sum);
	return 0;
}
