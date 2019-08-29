/* This program adds two numbers using pointers, to demonstrate the concept of pointers.
 *	Written by: Shreevathsa.
 *	Date	  : 23-08-2018.
*/	
#include<iostream>
using namespace std;

int main(){
	/*code*/
	
	int a;
	int b;
	int r;
	int* pa = &a;
	int* pb = &b;
	int* pr = &r;

	cout << "Enter the first number: ";
	cin  >> *pa;
	cout << "Enter the second number: ";
	cin  >> *pb;

	*pr = *pa + *pb;
	
	cout << endl;
	cout << *pa << " + " << *pb << " is " << *pr << endl;
	return 0;
}
