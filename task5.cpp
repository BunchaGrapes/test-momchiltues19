#include <iostream>

using namespace std;

int main()
{
	int rows_count = 0, middle_size = 0;
	cout << "Input number of rows in top part: ";
	cin >> rows_count;
	cout << "Input number of symbols in the middle: ";
	cin >> middle_size;

	char symbol = '*';
	cout << "Input symbol: ";
	cin >> symbol;

	bool is_top = true;
	const int END_ROWS_COUNT = 2*rows_count + middle_size;
	int i = 0;
	do
	{
		if(i == 0) 
			for(int k = 0; k < END_ROWS_COUNT; k++) cout << symbol;
		else
		{
			for(int k = 0; k < i; k++) cout << " ";
			cout << symbol;
			if(i == rows_count)
			{
				for(int k = 0; k < END_ROWS_COUNT - 2*(i+1); k++) cout << symbol;
				is_top = false;
			}
			else
				for(int k = 0; k < END_ROWS_COUNT - 2*(i+1); k++) cout << " ";
			cout << symbol;
			for(int k = 0; k < i; k++) cout << " "; 

		}
		if(i < rows_count && is_top) i++;
		else i--;
		cout << endl;
	}
	while(i >= 0);

	return 0;
}