/* show how pointer to pointer can be used by different input functions to read data to the same variable.
 *	Written by: Shreevathsa.
 *	Date	  : 26-08-2019.
*/
#include<iostream>
using namespace std;

int main(){
	int    a;
	int*   p;
	int**  q;
	int*** r;

	p = &a;
	q = &p;
	r = &q;

	cout << "Enter a number: ";
	cin  >> a;
	cout << "Your number is: " << a << endl;

	cout << "\nEnter a number: ";
	cin  >> *p;
	cout << "Your number is: " << a << endl;
	
	cout << "\nEnter a number: ";
	cin  >> **q;
	cout << "Your number is: " << a << endl;
	
	cout << "\nEnter a number: ";
	cin  >> ***r;
	cout << "Your number is: " << a << endl;
}
