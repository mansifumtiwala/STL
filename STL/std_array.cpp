//TOPIC: std::array
// array is container

//syntax : std::array<T, N> array;  here T is Type and N is size.

//NOTES: 
//1.) std::array is a container that encapslates fixed size arrays.
//2.) arraysize is needed at compile time.
//3.) Assign by value is actually by val. 
//4.) Access elements :
//	1.) at()
//	2.) []
//	3.) front()
//	4.) back()
//	5.) data() //gives access to underlying array


////Side Notes : What is an Array Decay ?? Problem with tradtional c style array
//			   u loose the size of an array. which wont be here as u have .size()
//			   function.


#include<iostream>
#include<array>

using namespace std;

int main()
{
	//declare
	std::array<int, 5> myarray;

	//initialization
	myarray = { 1,2,3,4,5 }; //initialization list
	std::array<int, 5> myarray2{ 1,2,3,4,5 }; //uniform initilization

	cout << myarray.at(1) << endl;
	cout << myarray.front() << endl;
}