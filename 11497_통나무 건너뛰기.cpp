#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int i, j, k, t, n, a[10000] = { 0 }, b[10000] = { 0 }, mid, level;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%d", &a[j]);
		}
		sort(a, a + n);
		mid = n / 2;
		b[mid] = a[n - 1];
		for (j = 0, k = 0; j < mid; j++, k += 2)
			b[j] = a[k];
		if (n % 2 == 1) {
			for (j = mid + 1, k = 1; j < n; j++, k += 2)
				b[j] = a[n - k - 1];
		}
		else {
			for (j = mid + 1, k = 1; j < n; j++, k += 2)
				b[j] = a[n - k - 2];
		}


		level = 0;
		for (j = 1; j < n; j++) {
			if (level < abs(b[j] - b[j - 1]))
				level = abs(b[j] - b[j - 1]);
		}
		if (level < abs(b[n - 1] - b[0]))
			level = abs(b[n - 1] - b[0]);
		printf("%d\n", level);
	}
	return 0;
}