#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	if (b >= 45)
		printf("%d %d", a, b - 45);
	else {
		if (a == 0)
			a = 23;
		else 
			a = a - 1;
		printf("%d %d", a, b + 15);
	}
	return 0;
}