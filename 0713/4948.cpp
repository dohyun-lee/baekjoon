#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, sosu, cnt;

	while (1) {
		sosu = 0;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}

		for (int i = n+1; i <= 2 * n; i++) {
			cnt = -1;
			if (i == 1) continue;
			for (int j = 2; j <= (int)sqrt(i); j++) {
				if (i%j == 0) cnt++;
				if (cnt >= 0) break;
			}
			if(cnt == -1)	sosu++;
		}
		printf("%d\n", sosu);
	}
	return 0;
}

