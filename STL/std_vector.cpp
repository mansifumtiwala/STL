//TOPIC : std::vector
//NOTES : 
// 1.) std::vector is a sequence container and also known as "dynamic array" or 
//		"Array list".
// 2.) Itz size can grow and shrink dynamically, and no need to provide Size at 
//     time.
// Element Access : 
// at(), [], front(), back(), data()
//
//Modifiers : 
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize()
// swap(), erase(), clear()

#include<iostream>
#include<vector>

using namespace std;

int main() {
	//Declarations
	std::vector<int> arr1;
	std::vector<int> arr2 = { 5,20 }; // array with size 5 and fill 20 in all the places
	std::vector<int> arr3 = { 1,2,3,4,5 }; //Initializer List
	std::vector<int> arr4{ 1,2,3,4,5 }; //uniform initialization

	//Accessing elements
	arr2[0] = 10;
	cout << "arr2[0] : " << arr2[0] << " arr2[1] : " << arr2.at(1) << endl;
	return 0;
}