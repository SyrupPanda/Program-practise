#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;
	int playerInput1 = 0;
	int playerInput2 = 0;

	cout << "Please tell me if it is raining with (1) or snowing with (2)?" << endl;
	cin >> playerInput1;
	cout << "What is the temperature(Celsius)?" << endl;
	cin >> playerInput2;

	if (playerInput1 == 1)
	{
		if (playerInput2 > 15)
		{
			cout << "Wear a light raincoat before going out." << endl;
		}
		else
		{
			cout << "Wear a thick coat before going out." << endl;
		}
	}
	if (playerInput1 == 2)
	{
		if (playerInput2 > 5)
		{
			cout << "Wear something warm before going out." << endl;
		}
		else
		{
			cout << "Wrap up well or stay home." << endl;
		}
	}
	else
	{
		cout << "Have a nice day out." << endl;
	}
}
