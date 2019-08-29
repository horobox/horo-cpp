/* Fun with pointers.
 *	Written by: Shreevathsa.
 *	Date	  : 23-08-2019.
*/		

#include<iostream>
using namespace std;

int main(){
	/*code*/
	
	int a = 6;
	int b = 2;
	int c;
	int* p = &b;
	int* q;
	int* r;

	q = p;
	r = &c;

	p = &a;
	*q = 8;
	*r = *p;

	*r = a + *q + *&c;

	cout <<  a << " " <<  b << " " <<  c << endl;
	cout << *p << " " << *q << " " << *r << endl;
	return 0;
}
