#include <stdio.h>

int check(int s, int t)
{
	if((t >= 0) && (t <= 365) && (s >= 1000))
		return 1;
	return 0;
}

int main()
{
	int s, t, r; // Не сокр.
	printf("Введите сумму и срок вклада:\n");
	scanf("%d%d", &s, &t);

	if (check(s, t) == 0) {
		printf("WRONG\n");
	}

	else {
		if ((t >= 0) && (t <= 30)) {
			r = s - (s * 0.1);
			printf("И теперь он равен: %d", r);
		}

		if ((t >= 31) && (t <= 120)) {
                        r = s + (s * 0.02);
                        printf("И теперь он равен: %d", r);
                }

		if ((t >= 121) && (t <= 240)) {
                        r = s + (s * 0.06);
                        printf("И теперь он равен: %d", r);
                }

		if ((t >= 241) && (t <= 365)) {
                        r = s + (s * 0.12);
                        printf("И теперь он равен: %d", r);
                }
	}
	
	printf("\n");

	return 0;
}