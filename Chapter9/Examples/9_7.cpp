/* Demonstrate size of pointers.
 *	Written by: Shreevathsa.	
 *	Date	  : 26-08-2019.
*/	

#include<iostream>
using namespace std;

int main(){
	char  c;
	char* pc;
	int sizeofc = sizeof(c);
	int sizeofpc = sizeof(pc);
	int sizeofStrapc = sizeof(*pc);
	
	int a;
	int* pa;
	int sizeofa = sizeof(a);
	int sizeofpa = sizeof(pa);
	int sizeofStrapa = sizeof(*pa);
	
	double x;
	double* px;
	double sizeofx = sizeof(x);
	double sizeofpx = sizeof(px);
	double sizeofStrapx = sizeof(*px);

	cout << "sizeof(c):   " << sizeofc << " | ";
	cout << "sizeof(pc):  " << sizeofpc << " | ";
	cout << "sizeof(*pc): " << sizeofStrapc << endl;
	
	cout << "sizeof(a):   " << sizeofa << " | ";
	cout << "sizeof(pa):  " << sizeofpa << " | ";
	cout << "sizeof(*pa): " << sizeofStrapa << endl;
	
	cout << "sizeof(x):   " << sizeofx << " | ";
	cout << "sizeof(px):  " << sizeofpx << " | ";
	cout << "sizeof(*px): " << sizeofStrapx << endl;

	return 0;
}
