#include <iostream>
#include <iterator> // for iterators
#include <vector>	// for vectors
using namespace std;


int main()
{
	vector<int> ar(5);

	ar.push_back(1);
	ar.push_back(2);
	ar.push_back(3);
	ar.push_back(4);
	ar.push_back(5);


    
	// Declaring iterator to a vector
	vector<int>::iterator ptr;

	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";

	return 0;
}