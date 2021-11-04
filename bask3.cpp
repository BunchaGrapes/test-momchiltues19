#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cout << "Input a number: ";
	cin >> num;

	//loop from 1 to num
	for (int perfect = 1; perfect < num; perfect++)
	{
		
		int sum = 0;
		//find sum of currents number's dividers
		for (int j = 1; j < perfect; j++)
		{
			if (perfect % j == 0) sum += j;
		}

		//check if current number is perfect
		if (sum == perfect)
		{
			cout << perfect << " - ";
			//loop for every divider
			for (int prime = 2; prime <= perfect; prime++)
			{
				if (perfect % prime == 0)
				{
					bool isPrime = true;
					//check if divider is prime
					for (int h = 2; h < prime; h++)
					{
						if (prime % h == 0)
						{
							isPrime = false;
							break;
						}

					}
					if (isPrime) cout << prime << ", ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}