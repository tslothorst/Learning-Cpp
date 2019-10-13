#include "main.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "The element at the first index of vector1 is: " << vector1.at(0) << endl;
	cout << "The element at the second index of vector1 is: " <<vector1.at(1) << endl;
	cout << "The size of vector1 is: " << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "The element at the first index of vector1 is: " << vector2.at(0) << endl;
	cout << "The element at the second index of vector1 is: " << vector2.at(1) << endl;
	cout << "The size of vector1 is: " << vector2.size() << endl;

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "The elements in vector_2d are:" << endl;
	cout << "The element at index 0,0: " << vector_2d.at(0).at(0) << endl;
	cout << "The element at index 0,1: " << vector_2d.at(0).at(1) << endl;
	cout << "The element at index 1,0: " << vector_2d.at(1).at(0) << endl;
	cout << "The element at index 1,1: " << vector_2d.at(1).at(1) << endl;

	cout << "Setting the first element of vector1 to 1000" << endl;
	vector1.at(0) = 1000;
	cout << "Displaying updated vector: " << endl;
	cout << "The element at the first index of vector1 is: " << vector1.at(0) << endl;
	cout << "The element at the second index of vector1 is: " << vector1.at(1) << endl;

	cout << "The elements in vector_2d are:" << endl;
	cout << "The element at index 0,0: " << vector_2d.at(0).at(0) << endl;
	cout << "The element at index 0,1: " << vector_2d.at(0).at(1) << endl;
	cout << "The element at index 1,0: " << vector_2d.at(1).at(0) << endl;
	cout << "The element at index 1,1: " << vector_2d.at(1).at(1) << endl;

	return 0;

}
