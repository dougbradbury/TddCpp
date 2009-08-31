extern "C"
{
#include "PrimeFactors.h"
#include <memory.h>
}

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(PrimeFactors)
{
	int result[12];
	void setup()
	{		
		memset(result, 0, sizeof(result));
		PrimeFactors_Create();
	}

	void teardown()
	{
	   PrimeFactors_Destroy();
	}
};

TEST(PrimeFactors, shouldFactorZero)
{
	LONGS_EQUAL(0, PrimeFactors_of(0, result));
	LONGS_EQUAL(0, result[0]);
}

TEST(PrimeFactors, shouldFactorOne)
{
	LONGS_EQUAL(0, PrimeFactors_of(1, result));
	LONGS_EQUAL(0, result[0]);
}

TEST(PrimeFactors, shouldFactorTwo)
{
	LONGS_EQUAL(1, PrimeFactors_of(2, result));
	LONGS_EQUAL(2, result[0])
}

TEST(PrimeFactors, shouldFactorThree)
{
	LONGS_EQUAL(1, PrimeFactors_of(3, result));
	LONGS_EQUAL(3, result[0]);
}

TEST(PrimeFactors, shouldFactorFour)
{
	LONGS_EQUAL(2, PrimeFactors_of(4, result));
	LONGS_EQUAL(2, result[0]);
	LONGS_EQUAL(2, result[1]);
}

TEST(PrimeFactors, shouldFactorFive)
{
	LONGS_EQUAL(1, PrimeFactors_of(5, result));
	LONGS_EQUAL(5, result[0])
}

TEST(PrimeFactors, shouldFactorSix)
{
	LONGS_EQUAL(2, PrimeFactors_of(6, result));
	LONGS_EQUAL(2, result[0]);
	LONGS_EQUAL(3, result[1]);
}

TEST(PrimeFactors, shouldFactorSeven)
{
	LONGS_EQUAL(1, PrimeFactors_of(7, result));
	LONGS_EQUAL(7, result[0]);
}

TEST(PrimeFactors, shouldFactorEight)
{
	LONGS_EQUAL(3, PrimeFactors_of(8, result));
	LONGS_EQUAL(2, result[0]);
	LONGS_EQUAL(2, result[1]);
	LONGS_EQUAL(2, result[2]);
}

TEST(PrimeFactors, shouldFactorNine)
{
	LONGS_EQUAL(2, PrimeFactors_of(9, result));
	LONGS_EQUAL(3, result[0]);
	LONGS_EQUAL(3, result[1]);
}

TEST(PrimeFactors, shouldFactorBigNum)
{
	LONGS_EQUAL(7, PrimeFactors_of(2*7*13*3*3*29*31, result));
	LONGS_EQUAL(2, result[0]);
	LONGS_EQUAL(3, result[1]);
	LONGS_EQUAL(3, result[2]);
	LONGS_EQUAL(7, result[3]);
	LONGS_EQUAL(13, result[4]);
	LONGS_EQUAL(29, result[5]);
	LONGS_EQUAL(31, result[6]);
}