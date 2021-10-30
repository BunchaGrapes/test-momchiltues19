#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			bool is_first_cout = true;
			cout << sum << " - ";
			for (int k = 2; k <= sum; k++)
			{
				if (sum % k == 0)
				{
					bool isPrime = true;
					for (int h = 2; h < k && isPrime; h++)
					{
						if (k % h == 0)
						{
							isPrime = false;
						}

					}
					if (isPrime)
					{
						if(is_first_cout)
						{
							cout << k;
							is_first_cout = false;
						}
						else
							cout << " " << k;

					}
				}
			}
			cout << endl;
		}
	}

	return 0;
}

