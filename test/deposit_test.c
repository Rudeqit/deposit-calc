#include <ctest.h>
#include <deposit.h>

CTEST(count, calc_sum_0_more_100k)
{
	const int dep = 100000;
	const int day = 0;
	const int result = count(dep, day);
	
	const int expect = 90000;
	ASSERT_EQUAL(expect, result);
}
