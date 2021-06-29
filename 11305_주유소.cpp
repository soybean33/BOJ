#include<stdio.h>
#define INF 1234567890
int main(void) {
	int i, j, k, n, d, min;
	int price[100000] = { 0 }, dist[100000] = { 0 };
	unsigned long long total = 0;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++)
		scanf("%d", &dist[i]);
	for (i = 0; i < n; i++) {
		scanf("%d", &price[i]);
	}
	i = 0;
	while (i < n) {
		d = 0;
		min = INF;
		for (j = i; price[i] < price[j + 1] && j < n - 1; j++);
		for (k = i; k <= j; k++) {
			d += dist[k];
			i++;
			if (min > price[k] && price[k])
				min = price[k];
		}
		total += (unsigned long long)d * (unsigned long long) min;
	}
	printf("%lld", total);
	return 0;
}
