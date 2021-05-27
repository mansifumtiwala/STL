// TOPIC : Best way to use Vector in C++ ? 
// Internally vector is a template class which has an array inside it which can grow 
// dynamically. Now .size() will give actual length of an array and .capacity() will
// give how much size an array can hold.
// with every push back operation if the array size is not fitting it will internally
// create the double size array.
// rather than coping the original data into new array. reserve the space for an array 
// which will sab unneceaary copying.



#include<iostream>
#include<vector>

using namespace std;

int main() {
	int i;
	vector<int> vec;
	//Here We have reserved 31 size, so until 31 place capacity will be 31,
	// when it tries to push 32 into vector it's capacity will be doubled.
	vec.reserve(31);

	for (i = 0; i < 32; ++i)
	{
		vec.push_back(i);
		cout << "vec.size() : " << vec.size() << " vec.capacity() : " << vec.capacity() << endl;
	}
	return 0;
}