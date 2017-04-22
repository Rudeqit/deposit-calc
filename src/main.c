#include <stdio.h>
#include "deposit.h"

int main()
{
	int sum, time; // Не сокр.
	printf("Введите сумму и срок вклада:\n");
	scanf("%d%d", &sum, &time);

        if (check(sum, time) == 0) {
                printf("ERROR");
        }

        else {
		printf("Вклад стал равен: %d", count(sum, time));
	}

	printf("\n");

	return 0;
}
