#include <iostream>
using namespace std;
int main()
{
	float a;
	float b;
	int options = 0;
	cout << "Enter value for first number:\n";
	cin >> a;
	cout << "Enter value for second number:\n";
	cin >> b;
	cout << "1) Addition\n" << "2) Subtraction\n" << "3) Multiplcation\n" << "4) Division\n";
	cout << "Enter the number of operation that you want to perform:  \n";
	cin >> options;
	if (options == 1)
	{
		cout << "Sum= " << a + b;
		return 0;
	}
	else {
		if (options == 2)

		{
			cout << "Subtraction= " << a - b;
			return 0;
		}
		else {
			if (options == 3)
			{
				cout << "Multiplication= " << a * b;
				return 0;
			}
			else {
				if (options == 4)
				{
					cout << "Division= " << a / b;
					return 0;
				}
			}
		}
	}
}