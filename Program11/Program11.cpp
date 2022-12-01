#include <iostream>
using namespace std;

int main()
{
	int playerInput = 0;

	cout << "Please choose your difficulty:" << endl << "1. I'm too young to die!" << endl << "2. Hey,not to rough!" << endl << "3. Hurt me plenty." << endl << "4. Ultra-Violence" << endl << "5. Nightmare" << endl;
	cin >> playerInput;

	switch (playerInput)
	{
	case 1:
		cout << "FYI they shoot back." << endl;
		break;

	case 2:
		cout << "Make sure to plug in the controller." << endl;
		break;

	case 3:
		cout << "This where the real starts." << endl;
		break;

	case 4:
		cout << "Rip and tear, till it all falls apart." << endl;
		break;

	case 5:
		cout << "Let the choir sing your name forevermore." << endl;
		break;

	default:
		cout << "Learn to count" << endl;
		break;
	}
}