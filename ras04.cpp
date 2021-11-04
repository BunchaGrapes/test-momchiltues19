#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cout << "Input amount: ";
	cin >> num;

	char prev_symbol = 0;
	cin >> prev_symbol;
	bool is_ordered = true;
	if(prev_symbol >= 'A' && prev_symbol <= 'Z') prev_symbol -= 'A' - 'a';

	for(int i = 0; i < num-1; i++)
	{
		char symbol;
		cin >> symbol;
		if(symbol >= 'A' && symbol <= 'Z') symbol -= 'A' - 'a';

		if(symbol < prev_symbol) is_ordered = false;
		
		prev_symbol = symbol;
	}

	cout << is_ordered << endl;

	return 0;
}