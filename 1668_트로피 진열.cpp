#include<stdio.h>
int main(void) {
	int n, i, j, trophy[50] = { 0 }, cnt_1 = 1, cnt_2 = 1, pre_h1, pre_h2;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &trophy[i]);
	}
	pre_h1 = trophy[0];
	pre_h2 = trophy[n - 1];
	for (i = 0; i < n; i++) {
		if (trophy[i] > pre_h1) {
			cnt_1++;
			pre_h1 = trophy[i];
		}
		if (trophy[n - i - 1] > pre_h2) {
			cnt_2++;
			pre_h2 = trophy[n - i - 1];
		}
	}
	printf("%d\n%d", cnt_1, cnt_2);
	return 0;
}