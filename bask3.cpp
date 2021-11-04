#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Input a number: ";
	cin >> num;

	for (int perfect = 1; perfect < num; perfect++)
	{
		
		int sum = 0;
		for (int j = 1; j < perfect; j++)
		{
			if (perfect % j == 0)
			{
				sum += j;
			}
		}
		if (sum == perfect)
		{
			cout << perfect << " - ";
			for (int prime = 2; prime <= perfect; prime++)
			{
				if (perfect % prime == 0)
				{
					bool isPrime = true;
					for (int h = 2; h < prime && isPrime; h++)
					{
						if (prime % h == 0)
						{
							isPrime = false;
						}

					}
					if (isPrime)
					{
						cout << prime << ", ";
					}
				}
			}
			cout << endl;
		}
	}

	return 0;
}

