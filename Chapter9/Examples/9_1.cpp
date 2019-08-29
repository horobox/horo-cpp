/* Demonstrate pointer use.
 *	Written by: Shreevathsa.
 *	Date	  : 23-08-2019.
*/
#include<iostream>
using namespace std;

int main(){
	/*code*/
	
	int a;
	int* p;

	a = 14;
	p = &a;

	int* q;

	cout << a << " " << &a << endl;
	cout << p << " " << *p << " " << a << endl;
	cout << *q << endl;
	return 0;
}
