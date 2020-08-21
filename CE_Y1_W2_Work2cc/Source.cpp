#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	if (n > 0 || n < 13) {
		for (int i = 1; i <= 12; i++)
		{
			if (i < 10) {
				printf("%d x %d  = %d\n", n, i, n * i);
			}
			else
			{
				printf("%d x %d = %d\n", n, i, n * i);
			}
		}
	}
	else
	{
		printf("You must enter number between 1 - 12 only!");
	}
}