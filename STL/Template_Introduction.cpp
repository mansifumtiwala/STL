//Template Introduction
//points : 
//
//1.) There are two places where we can apply templates
//	1.) Function Templates
//	2.) Class Templates
//2.) Tenplates are a way to write generic programs.
//3.) The main point is we can pass Data type as parameter to Function or class.

#include <iostream>

template<typename T>
T getmax(T x, T y) {
	return x > y ? x : y;
}

using namespace std;
int main() {
	int x = 500, y = 200;
	char a = 'a', b = 'p';
	cout << getmax<int>(x, y) << endl;
	cout << getmax<char>(a, b) << endl;
	return 0;
}