#include <iostream>
using namespace std;

int main()
{
	char status = 'l';
	int choice = 1;

	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other." << endl;
	cin >> status;
	cout << "Which game would you like, 1 or 2?" << endl;
	cin >> choice;

	if (status == 's' || status == 't')
	{
		if (choice == 1)
		{
			cout << "You can get a 20% discount!" << endl;
		}
		if (choice == 2)
		{
			cout << "You can get a 10% discount!" << endl;
		}
	}
	else
	{
		cout << "You are not eligible to a discount." << endl;
	}
}
