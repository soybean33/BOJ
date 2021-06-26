#include<stdio.h>
int main(void) {
	int eratos[1001] = { 0 }, erased_number[1001] = { 0 };
	int n, k, cnt = 0, i, p, j, temp;
	scanf("%d %d", &n, &k);
	while (cnt < k) {
		for (i = 2; i <= n; i++) {
			if (eratos[i] == 0) {
				eratos[i] = 1;
				p = i;
				cnt++;
				erased_number[cnt] = i;
				break;
			}
		}
		if (p == 0) {
			break;
		}
		for (i = 2;; i++) {
			temp = p * i;
			if (temp > n)
				break;
			if (eratos[temp] == 1)
				continue;
			eratos[temp] = 1;
			cnt++;
			erased_number[cnt] = temp;
		}
		p = 0;
	}
	printf("%d ", erased_number[k]);
}