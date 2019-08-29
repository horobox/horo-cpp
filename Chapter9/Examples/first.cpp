// This program prints character addresses
#include<iostream>
using namespace std;

int main(){
	/*code*/
	
	char a;
	char b;
	
	cout << (void*)&a << "\t" << (void*)&b << endl;
	return 0;
}
