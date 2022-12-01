#include <iostream>
using namespace std;

int main()
{
	int packets = 40;
	int student = 14;
	int leftovers = packets % student;
	int given = packets / student;

	cout << "Packets of Harbios give: " << given << endl;
	cout << "Packets left: " << leftovers << endl;
}
