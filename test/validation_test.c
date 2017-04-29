#include <ctest.h>
#include <deposit.h>

CTEST(check, valid_input_365_more_10k)
{
	const int dep = 10000;
	const int day = 365;
	const int result = check(dep, day);
	
	ASSERT_TRUE(result);
}

CTEST(check, valid_input_negative_less_10k)
{
	const int dep = 0;
	const int day = -1;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}
