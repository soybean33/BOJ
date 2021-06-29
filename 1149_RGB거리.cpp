#include<stdio.h>
#include<algorithm>
using namespace std;

int a[1001][3],d[1001][3];
int main(void) {
	int i, n, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	for (i = 1; i <= n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
	}
	printf("%d", min(d[n][0], min(d[n][1], d[n][2])));
	return 0;
}