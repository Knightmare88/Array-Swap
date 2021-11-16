#include <iostream>
using namespace std;

void reverse(int size, int beginIndex, int endIndex, int array[]);

int main()
{
	int begin, end;
	int const ARRAY_SIZE = 6;
	int array[ARRAY_SIZE]; { 8, 6, 4, 9, 2, -1;}

	cout << "Enter a begin number: ";
	cin >> begin;
	cout << "Enter an end number: ";
	cin >> end;
	if (begin > end || end > ARRAY_SIZE || begin < 0)
		cout << "Invalid begin or end number, try again";
	else 
	{
		reverse(ARRAY_SIZE, begin, end, array);
	}

	return 0;
}

void reverse(int size, int beginIndex, int endIndex, int array[])
{
	

}