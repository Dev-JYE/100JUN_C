// 문제 좀 잘 읽자^^
#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m < 45) {
		h -= 1;
		m = m + 15;
		if (h < 0) {
			h += 24;
		}
	}
	else {
		m -= 45;
	}
	printf("%d %d", h, m);
	return 0;
}
