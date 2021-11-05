#include <iostream>

using namespace std;

int main()
{
	int day = 0, month = 0, year = 0;
	cout << "Input valid date: " << endl;

	bool do_day_match_month = true, is_year_leap = false;
	while(!do_day_match_month)
	{
		while(day <= 0 || day > 31)
		{
			cout << "day: ";
			cin >> day;
		}

		while(month <= 0 || month > 12)
		{
			cout << "month: ";
			cin >> month;
		}

		while(year <= 0)
		{
			cout << "year: ";
			cin >> year;
		}

		is_year_leap = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

		switch(month)
		{
			case 2: 
				if(is_year_leap)
					if(day > 29) do_day_match_month = false; break;
				else 
					if(day > 28) do_day_match_month = false; break;
			case 4: case 6: case 9: case 11: 
				if(day > 30) do_day_match_month = false; break;
			default: 
				do_day_match_month = true;
		}
	}

	return 0;
}