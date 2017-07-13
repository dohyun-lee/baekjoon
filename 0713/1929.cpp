#include<stdio.h>
#include<math.h>

int main(void)
{
	int m, n;
	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++) {
		int cnt = -1;
		if (i == 1) continue;
		for (int j = 2; j <= (int)sqrt(i); j++) {
			if (i%j == 0) cnt++;
			if (cnt >= 0) break;
		}
		if (cnt == -1)	printf("%d\n", i);
	}	
	return 0;
}

