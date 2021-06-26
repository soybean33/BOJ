#include<stdio.h>
#include<math.h>
int main(void) {
	unsigned int a, b, v;
	double day;
	scanf("%d %d %d", &a, &b, &v);

	day = (double)(v - a) / (double)(a - b);
	day = ceil((day + 1));
	printf("%.0f", day);
	return 0;
}