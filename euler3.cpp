#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}

	for (long long i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;

}

int main()
{
	long long number = 600851475143;
	long long CURRENT_MAX = -1;
	for (long long i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
		{
			if (isPrime(i) == true)
			{
				if(i > CURRENT_MAX)
				{
					CURRENT_MAX = i;
				}
			}
		}
	}
	
	std::cout << CURRENT_MAX;
	return 0;
}