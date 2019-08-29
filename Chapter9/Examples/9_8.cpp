/* Demonstrate writting pointer values
 *	Written by: Shreevathsa.
 *	Date	  : 26-08-2019.
 */

#include<iostream>
using namespace std;

int main(){
	/*code*/
	
	int anInt = 1234;
	int* pInt = &anInt;
	cout << "andInt is located at:  " << &anInt << endl;
	cout << "pInt's value is:       " << pInt << endl;

	const char* pChar = "Hello";
	cout << "pChar points to:       " << pChar << endl;
	cout << "pChar's value is:      " << (void* ) pChar << endl;
	return 0;
}
