#include <ctest.h>
#include <deposit.h>

//1
CTEST(count, calc_sum_0_more_100k)
{
	const int dep = 100000;
	const int day = 0;
	const int result = count(dep, day);
	
	const int expect = 90000;
	ASSERT_EQUAL(expect, result);
}

//2
CTEST(count, calc_sum_30_less_100k)
{
	const int dep = 99999;
	const int day = 30;
	const int result = count(dep, day);
	
	const int expect = 89999;
	ASSERT_EQUAL(expect, result);
}

//3
CTEST(count, calc_sum_31_less_100k)
{
	const int dep = 99999;
	const int day = 31;
	const int result = count(dep, day);
	
	const int expect = 101998;
	ASSERT_EQUAL(expect, result);
}

//4
CTEST(count, calc_sum_120_less_100k)
{
	const int dep = 99999;
	const int day = 120;
	const int result = count(dep, day);
	
	const int expect = 101998;
	ASSERT_EQUAL(expect, result);
}

//5
CTEST(count, calc_sum_121_less_100k)
{
	const int dep = 99999;
	const int day = 121;
	const int result = count(dep, day);
	
	const int expect = 105998;
	ASSERT_EQUAL(expect, result);
}

//6
CTEST(count, calc_sum_240_less_100k)
{
	const int dep = 99999;
	const int day = 240;
	const int result = count(dep, day);
	
	const int expect = 105998;
	ASSERT_EQUAL(expect, result);
}

//7
CTEST(count, calc_sum_241_less_100k)
{
	const int dep = 99999;
	const int day = 241;
	const int result = count(dep, day);
	
	const int expect = 111998;
	ASSERT_EQUAL(expect, result);
}

//8
CTEST(count, calc_sum_365_less_100k)
{
	const int dep = 99999;
	const int day = 365;
	const int result = count(dep, day);
	
	const int expect = 111998;
	ASSERT_EQUAL(expect, result);
}

//9
CTEST(count, calc_sum_30_more_100k)
{
	const int dep = 100000;
	const int day = 30;
	const int result = count(dep, day);
	
	const int expect = 90000;
	ASSERT_EQUAL(expect, result);
}

//10
CTEST(count, calc_sum_31_more_100k)
{
	const int dep = 100000;
	const int day = 31;
	const int result = count(dep, day);
	
	const int expect = 102000;
	ASSERT_EQUAL(expect, result);
}

//11
CTEST(count, calc_sum_120_more_100k)
{
	const int dep = 100000;
	const int day = 120;
	const int result = count(dep, day);
	
	const int expect = 102000;
	ASSERT_EQUAL(expect, result);
}


//12
CTEST(count, calc_sum_121_more_100k)
{
	const int dep = 100000;
	const int day = 121;
	const int result = count(dep, day);
	
	const int expect = 106000;
	ASSERT_EQUAL(expect, result);
}

//13
CTEST(count, calc_sum_240_more_100k)
{
	const int dep = 100000;
	const int day = 240;
	const int result = count(dep, day);
	
	const int expect = 106000;
	ASSERT_EQUAL(expect, result);
}

//14
CTEST(count, calc_sum_241_more_100k)
{
	const int dep = 100000;
	const int day = 241;
	const int result = count(dep, day);
	
	const int expect = 112000;
	ASSERT_EQUAL(expect, result);
}

//15
CTEST(count, calc_sum_360_more_100k)
{
	const int dep = 100000;
	const int day = 360;
	const int result = count(dep, day);
	
	const int expect = 112000;
	ASSERT_EQUAL(expect, result);
}
