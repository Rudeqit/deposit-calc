#include "deposit.h"

int check(int sum, int time)
{
	if((time >= 0) && (time <= 365) && (sum >= 1000))
		return 1;
	return 0;
}

int count(int sum, int time)
{
	if ((time >= 0) && (time <= 30)) {
		sum = sum - (sum * 0.1);
	}

	if ((time >= 31) && (time <= 120)) {
		sum = sum + (sum * 0.02);
	}

	if ((time >= 121) && (time <= 240)) {
		sum = sum + (sum * 0.06);
	}

	if ((time >= 241) && (time <= 365)) {
		sum = sum + (sum * 0.12);
	}
	return sum;
}
