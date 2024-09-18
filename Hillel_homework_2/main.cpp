#include <iostream>
#include <string>

using namespace std;

struct Fruit
{
	string Name;
	float Weight;
	string ExpDate;
};

int main() 
{
	const int arraySize = 3;
	
	Fruit fruits[arraySize];

	//Data input
	for (int i = 0; i < arraySize; i++)
	{
		cout << "please enter fruit name: ";
		getline(cin, fruits[i].Name);

		cout << "please enter fruit weight: ";
		cin >> fruits[i].Weight;
		
		//	Clear the input stream because a newline character is kept after cin. 
		//	If it is possible to make it prettier, please let me know.
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "please enter expiration date: ";
		getline(cin, fruits[i].ExpDate);

		cout << endl;
	}

	//Data output
	for (int i = 0; i < arraySize; i++)
	{
		cout << "---------------------->" << "\n";
		cout << i + 1 << " " << "Fruit name: " << fruits[i].Name << "\n";
		cout << i + 1 << " " << "Fruit weight: " << fruits[i].Weight << "\n";
		cout << i + 1 << " " << "Expiration date" << fruits[i].ExpDate << "\n";
	}

	return 0;
}