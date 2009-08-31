#include "PrimeFactors.h"
#include <stdlib.h>
#include <memory.h>

//static local variables


void PrimeFactors_Create(void)
{
}

void PrimeFactors_Destroy(void)
{
}

int PrimeFactors_of(int n, int* results)
{
	int i = 0;
	int candidate = 2;
	while (candidate <= n)
	{
		while (n % candidate == 0)
		{
			n /= candidate;
			results[i++] = candidate;
		}
		candidate +=1 ;
	}	
	return i;
}
