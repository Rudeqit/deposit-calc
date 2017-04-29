#include <ctest.h>
#include <deposit.h>

//16
CTEST(check, valid_input_negative_less_10k)
{
	const int dep = 0;
	const int day = -1;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}

//17
CTEST(check, valid_input_negative_more_10k)
{
	const int dep = 10000;
	const int day = -1;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}

//18
CTEST(check, valid_input_0_less_10k)
{
	const int dep = 0;
	const int day = -1;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}

//19
CTEST(check, valid_input_0_more_10k)
{
	const int dep = 10000;
	const int day = 0;
	const int result = check(dep, day);
	
	ASSERT_TRUE(result);
}

//20
CTEST(check, valid_input_365_less_10k)
{
	const int dep = 0;
	const int day = 365;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}

//21
CTEST(check, valid_input_365_more_10k)
{
	const int dep = 10000;
	const int day = 365;
	const int result = check(dep, day);
	
	ASSERT_TRUE(result);
}

//22
CTEST(check, valid_input_366_less_10k)
{
	const int dep = 0;
	const int day = 366;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}

//23
CTEST(check, valid_input_366_more_10k)
{
	const int dep = 10000;
	const int day = 366;
	const int result = check(dep, day);
	
	ASSERT_FALSE(result);
}
