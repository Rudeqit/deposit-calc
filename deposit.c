#include <stdio.h>

int check(int s, int t)
{
	if((t >= 0) && (t <= 365) && (s >= 1000))
		return 1;
	return 0;
}

int main()
{
	int s, t;
	printf("Введите сумму и срок вклада:\n");
	scanf("%d %d", &s, &t);
	
	return 0;
}
