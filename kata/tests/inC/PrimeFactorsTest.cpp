extern "C"
{
#include "PrimeFactors.h"
#include <memory.h>
}

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(PrimeFactors)
{
	void setup()
	{		
		PrimeFactors_Create();
	}

	void teardown()
	{
	   PrimeFactors_Destroy();
	}
};