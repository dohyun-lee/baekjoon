#include<stdio.h>
#include<math.h>

int main(void)
{
	int m, n, sum=0, min = 10000;

	scanf("%d %d", &m, &n);
	
	for (int i = m; i <= n; i++) {
		int chk = -1;

		for (int j = 1; j <= i/2; j++) {
			if (i%j == 0) {
				chk = 0;
				break;
			}
		}

		if (chk == -1) {
			sum += i;
			if (min > i)		min = i;
		}
	}

	if (min == 10000) printf("-1");
	else printf("%d\n%d\n", sum, min);	

	return 0;
}

